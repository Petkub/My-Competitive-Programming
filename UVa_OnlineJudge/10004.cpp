#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n;
    while(cin>>n and n!=0)
    {
        int m; cin>>m;
        vector<vector<int>> adj(n);
        for(int i=0;i<m;i++)
        {
            int u,v; cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> color(n+1, -1);
        color[0]=0;
        queue<int> q;
        q.push(0);
        int ok=true;
        while(!q.empty())
        {
            int u=q.front(); q.pop();
            for(int v: adj[u])
            {
                if(color[v]==-1)
                {
                    color[v]=color[u]^1;
                    q.push(v);
                }
                else if(color[v]==color[u])
                {
                    ok=false;
                    break;
                }
            }
            if(!ok) break;
        }
        cout<<(ok? "BICOLORABLE.":"NOT BICOLORABLE.")<<"\n";
        adj.clear();
        color.clear();
    }
    return 0;
}