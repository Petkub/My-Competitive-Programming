#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
vector<vector<int>> adj;
vector<bool> vis;
vector<int> color;
bool ok=true;

void bfs(int n)
{
    color[n]=1;
    queue<int> q;
    q.push(n);
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
                return;
            }
        }
    }
}

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    cin>>n>>m;
    adj.resize(n+1);
    color.assign(n+1, -1);
    for(int i=0;i<m;i++)
    {
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=1;i<=n;i++)
    {
        if(color[i]==-1)
        {
            bfs(i);
            if(!ok)
            {
                cout<<"IMPOSSIBLE";return 0;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<(color[i]==1? "1":"2")<<" ";
    }
    return 0;
}