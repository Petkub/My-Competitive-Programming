#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF = 4e18;
using ii = pair<int,int>;

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n,m,q,s;
    while((cin>>n>>m>>q>>s) and !(n==0 and m==0 and q==0 and s==0))
    {
        vector<vector<ii>> adj(n);
        vector<int> dist(n, INF);
        for(int i=0;i<m;i++)
        {
            int u,v,w; cin>>u>>v>>w;
            adj[u].push_back({v,w});
        }

        dist[s]=0;
        priority_queue<ii, vector<ii>, greater<ii>> pq;
        pq.emplace(dist[s], s);
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
        while(q--)
        {
            int d; cin>>d;
            if(dist[d]==INF) cout<<"Impossible\n";
            else cout<<dist[d]<<'\n';
        }
        cout<<'\n';
    }
    return 0;
}