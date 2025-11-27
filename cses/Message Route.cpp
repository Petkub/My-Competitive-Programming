#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
vector<vector<int>> adj;
vector<int> dist;

void bfs(int n)
{
    dist[n]=1;
    queue<int> q;
    q.push(n);
    while(!q.empty())
    {
        int u=q.front(); q.pop();
        for(int v: adj[u])
        {
            if(dist[v]==-1)
            {
                dist[v]=dist[u]+1;
                q.push(v);
            }
        }
    }
}

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    cin>>n>>m;
    adj.resize(n+1);
    dist.assign(n+1, -1);
    for(int i=0;i<m;i++)
    {
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
    if(dist[n]==-1)
    {
        cout<<"IMPOSSIBLE";
        return 0;
    }
    cout<<dist[n]<<"\n";
    int cn=n;
    deque<int> ans;
    while(cn!=1)
    {
        ans.push_front(cn);
        for(int v: adj[cn])
        {
            if(dist[v]==dist[cn]-1) cn=v;
        }
    }
    ans.push_front(1);
    while(!ans.empty())
    {
        cout<<ans.front()<<" "; ans.pop_front();
    }
    return 0;
}