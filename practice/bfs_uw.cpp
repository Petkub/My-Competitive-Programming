#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;

const int INF = 2e9;
int V,E;
vvi adj;
vi dist;

void bfs(int n)
{
    queue<int> q;
    q.push(n);
    dist[n]=0;
    while(!q.empty())
    {
        int u=q.front();q.pop();
        cout<<"Node "<<n<<" -> "<<u<<" Distance: "<<dist[u]<<'\n';;
        for(auto &v: adj[u])
        {
            if(dist[v]!=INF) continue;
            dist[v]=dist[u]+1;
            q.push(v);    
        }
    }
}

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    cin>>V>>E;
    adj.resize(V);
    dist.assign(V, INF);

    for(int i=0;i<E;i++)
    {
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int cc=0;
    for(int i=0;i<V;i++)
    {
        if(dist[i]==INF)
        {
            cc++;
            cout<<"Component "<<cc<<":\n";
            bfs(i);
        }
    }
    cout<<"total Component"<<cc<<'\n';

    return 0;
}