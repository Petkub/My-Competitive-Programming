#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF = 4e18;

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n,m,q;
    while((cin>>n>>m>>q) and !(n==0 and m==0 and q==0))
    {
        vector<vector<int>> adj(n, vector<int>(n, INF));
        for(int i=0;i<n;i++) adj[i][i]=0;
        for(int i=0;i<m;i++)
        {
            int u,v,w; cin>>u>>v>>w;
            adj[u][v]=min(adj[u][v], w);
        }
        for(int k=0;k<n;k++)
        {
            for(int i=0;i<n;i++)
            {
                if(adj[i][k]==INF) continue;
                for(int j=0;j<n;j++)
                {
                    if(adj[k][j]==INF) continue;
                    adj[i][j] = min(adj[i][j], adj[i][k]+adj[k][j]);
                }
            }
        }
        while(q--)
        {
            int u,v; cin>>u>>v;
            if(adj[u][v]==INF) cout<<"Impossible\n";
            else cout<<adj[u][v]<<'\n';
        }
        cout<<'\n';
    }
    return 0;
}