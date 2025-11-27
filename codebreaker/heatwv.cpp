#include<bits/stdc++.h>
using namespace std;
#define int long long
using ii = pair<int,int>;
const int INF = 4e18;

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n,m,ts,te; cin>>n>>m>>ts>>te;
    vector<vector<ii>> adj(n+1);
    vector<int> dist(n+1, INF);
    for(int i=0;i<m;i++)
    {
        int u,v,w; cin>>u>>v>>w;
        adj[u].emplace_back(v,w);
        adj[v].emplace_back(u,w);
    }
    priority_queue<ii,vector<ii>,greater<ii>> pq;
    dist[ts]=0;
    pq.emplace(dist[ts],ts);
    while(!pq.empty())
    {
        auto [dist_u, u] = pq.top();
        pq.pop();
        
        if(dist_u != dist[u]) continue;

        for(auto [v, w]: adj[u])
        {
            if(dist[u]+w < dist[v])
            {
                dist[v]=dist[u]+w;
                pq.emplace(dist[v],v);
            }
        }
    }
    cout<<dist[te];
    return 0;
}