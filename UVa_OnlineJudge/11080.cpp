#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int>> adj;
vector<int> color;

int bfs(int n)
{
    color[n]=0;
    queue<int> q;
    q.push(n);
    vector<int> cnt={1, 0};
    while(!q.empty())
    {
        int u=q.front(); q.pop();
        for(int v: adj[u])
        {
            if(color[v]==-1)
            {
                color[v]=color[u]^1;
                cnt[color[v]]++;
                q.push(v);
            }
            else if(color[u]==color[v])
            {
                return -1;
            }
        }
    }
    if(cnt[0]+cnt[1]==1) return 1;
    return min(cnt[0],cnt[1]);
}

int32_t main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t; cin>>t;
    while(t--)
    {
        int n,m; cin>>n>>m;
        adj.resize(n);
        color.assign(n,-1);
        for(int i=0;i<m;i++)
        {
            int u,v; cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int cnt=0;
        bool ok=true;
        for(int i=0;i<n;i++)
        {
            if(color[i]==-1)
            {
                int ans=bfs(i);
                if(ans!=-1) cnt+=ans;
                else {ok=false; break;}
            }
        }
        cout<<(ok? cnt:-1)<<'\n';
        adj.clear();
        color.clear();
    }
    return 0;
}