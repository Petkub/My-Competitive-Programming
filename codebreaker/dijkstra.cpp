#include<bits/stdc++.h>
using namespace std;
#define int long long
using ii = pair<int,int>;
const int INF=4e18;

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n,m; cin>>n>>m;
    vector<vector<ii>> adj(n+1);
    for(int i=0;i<m;i++)
    {
        int u,v,w; cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    priority_queue<ii,vector<ii>,greater<ii>> pq;
    vector<int> dist(n+1, INF);
    dist[1]=0;
    pq.push({dist[1], 1});
    while(!pq.empty())
    {
        auto [dist_u, u] = pq.top(); pq.pop();
        
        if(dist_u != dist[u]) continue;
        
        for(auto [v, w]: adj[u])
        {
            if(dist[u]+w < dist[v])
            {
                dist[v] = dist[u]+w;
                pq.push({dist[v], v});
            }
        }
    }
    cout<<(dist[n]==INF? -1:dist[n]);
    return 0;
}