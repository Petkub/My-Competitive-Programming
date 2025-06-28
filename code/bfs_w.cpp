#include<bits/stdc++.h>
using namespace std;
using ii = pair<int,int>;
using vi = vector<int>;
using vii = vector<ii>;
using vvii = vector<vii>;
const int INF=2e9;
int V,E;
vvii adj;
vi dist;

void bfs(int n)
{
    queue<int> q;
    q.push(n);
    dist[n]=0;
    while(!q.empty())
    {
        int u=q.front();q.pop();
        cout<<"Node "<<n<<" --> "<<u<<" distance = "<<dist[u]<<'\n';
        for(auto &[v, w]: adj[u])
        {
            if(dist[v]!=INF) continue;
            dist[v]=dist[u]+w;
            q.push(v);
        }
    }
}

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    cin>>V>>E;
    adj.resize(V);
    dist.assign(V,INF);
    for(int i=0;i<E;i++)
    {
        int u,v,w;cin>>u>>v>>w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    int cc=0;
    for(int i=0;i<V;i++)
    {
        if(dist[i]==INF)
        {
            cc++;
            cout<<"Component "<<cc<<'\n';
            bfs(i);
        }
    }
    return 0;
}