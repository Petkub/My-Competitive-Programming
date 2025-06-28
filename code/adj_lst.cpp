#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool> vis;
int N,E;

void bfs(int n)
{
    vis[n] = true;
    queue<int> q;
    q.push(n);

    while(!q.empty())
    {
        int cur_v = q.front(); q.pop();
        for(int &nbr: adj[cur_v])
        {
            if(!vis[nbr])
            {
                vis[nbr] = true;
                q.push(nbr);
            }
        }
    }
}

void dfs(int n)
{
    vis[n] = true;
    for(int &nbr: adj[n])
    {
        if(!vis[nbr])
        {
            dfs(nbr);
        }
    }
}

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    cin>>N>>E;
    adj.resize(N + 1);
    vis.assign(N + 1, false);
    for(int i=0;i<E;i++)
    {
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
    return 0;
}