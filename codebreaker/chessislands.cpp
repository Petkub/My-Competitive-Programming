#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);
    int n,m; cin>>n>>m;
    vector<vector<int>> adj(n-2);
    vector<int> a(n+1),color(n+1,-1);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(color[i]!=-1) continue;
        color[i]=0;
        int tot[2]={0, 0};
        tot[0]+=a[i];
        queue<int> q;
        q.push(i);
        while(!q.empty())
        {
            int u=q.front(); q.pop();
            for(int v: adj[u])
            {
                if(color[v]==-1)
                {
                    color[v]=color[u]^1;
                    tot[color[v]]+=a[v];
                    q.push(v);
                }
            }
        }
        cnt += min(tot[0],tot[1]);
    }
    cout<<cnt;
    return 0;
}