#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<pair<int,int>>> adj;
vector<int> dist;
const int INF=9e18;

void bfs(int v)
{
    queue<int> q;
    dist[v]=0;
    q.push(v);
    while(!q.empty())
    {
        int cur=q.front(); q.pop();
        for(auto p: adj[cur])
        {
            auto [nbr,w] = p;
            if(dist[nbr]!=-1) continue;
            dist[nbr]=dist[cur]+w;
            q.push(nbr);
        }
    }
}

void dfs(int v)
{
    for(auto nb: adj[v])
    {
        auto [u, w] = nb;
        if(dist[u]!=-INF) continue;
        dist[u]=dist[v]+w;
        dfs(u);
    }
}

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n; cin>>n;
    int m=n-1;
    adj.resize(n+1);
    dist.assign(n+1, -INF);
    for(int i=0;i<m;i++)
    {
        int u,v,w;cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,-w});
    }
    dist[1]=0;
    dfs(1);
    int Q;cin>>Q;
    while(Q--)
    {
        int X,Y; cin>>X>>Y;
        cout<<dist[Y]-dist[X]<<'\n';
    }
    return 0;
}