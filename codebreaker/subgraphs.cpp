#include<bits/stdc++.h>
using namespace std;
int V,E;
vector<vector<int>> adj;
vector<bool> vis;

// void dfs(int n)
// {
//     vis[n]=true;
//     for(auto &v: adj[n])
//     {
//         if(!vis[v]) {dfs(v);}
//     }
// }

void bfs(int n)
{
    queue<int> q;
    vis[n]=true;
    q.push(n);
    while(!q.empty())
    {
        int u=q.front();q.pop();
        for(auto &v: adj[u])
        {
            if(!vis[v])
            {
                vis[v]=true;
                q.push(v);
            }
        }
    }
}

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    cin>>V>>E;
    adj.resize(V);
    vis.assign(V,false);
    for(int i=0;i<E;i++)
    {
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int cc=0;
    for(int i=0;i<V;i++)
    {
        if(!vis[i])
        {
            cc++;
            bfs(i);
        }
    }
    cout<<cc;
    return 0;
}