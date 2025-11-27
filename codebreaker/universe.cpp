#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);
    int n,k; cin>>n>>k;
    vector<int> cat(n+1);
    for(int i=1;i<=n;i++)cin>>cat[i];
    vector<vector<int>>adj(n+1);
    vector<bool> vis(n+1,false);
    vector<int> con(n+1, 0);
    con[1] = cat[1];

    for(int i=1;i<=n-1;i++)
    {
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vis[1]=true;
    queue<int> q;
    int cnt=0;
    q.push(1);
    while(!q.empty())
    {
        int u = q.front(); q.pop();
        if (u!=1 and adj[u].size()==1LL) {cnt++; continue;}
        for(int v: adj[u])
        {
            if(vis[v]) continue;
            if(con[u]+cat[v]>k) continue;

            if(cat[v])con[v]=con[u]+cat[v];
            else con[v]=0;
            vis[v]=true;
            q.push(v);
        }
    }
    cout<<cnt;
    return 0;
}