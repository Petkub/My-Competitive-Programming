#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vi>;
vii adj;
vector<bool> vis;
int N,M;

void bfs(int n)
{
    queue<int> q;
    q.push(n);
    vis[n]=true;
    while(!q.empty())
    {
        int v=q.front();q.pop();
        for(int &u: adj[v])
        {
            if(!vis[u])
            {
                vis[u]=true;
                q.push(u);
            }
        }
    }
}

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    cin>>N>>M;
    adj.resize(N+1);
    vis.assign(N+1,false);
    for(int i=0;i<M;i++)
    {
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bfs(1);
    bool connected=true;
    for(int i=2;i<=N;i++)
    {
        if(!vis[i])
        {
            connected=false;
            cout<<i<<'\n';
        }
    }
    if(connected) cout<<"Connected";


    return 0;
}