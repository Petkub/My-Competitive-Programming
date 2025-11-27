#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n,m; cin>>n>>m;
    vector<vector<int>> adj(n+1);
    vector<bool> vis(n+1,false);
    for(int i=1;i<=m;i++)
    {
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int u: adj[1])
    {
        vis[u]=true;
        for(int v: adj[u])
        {
            vis[v]=true;
        }
    }
    int ans=0;
    for(int i=2;i<=n;i++)
    {
        if(vis[i]) ans++;
    }
    cout<<ans;
    return 0;
}