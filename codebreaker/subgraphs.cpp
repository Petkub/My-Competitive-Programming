#include<bits/stdc++.h>
using namespace std;
#define int long long

vector<vector<int>> adj;
vector<bool> vis;

void dfs(int n)
{
    vis[n]=true;
    for(auto nbr: adj[n])
    {
        if(!vis[nbr])
        {
            dfs(nbr);
        }
    }
}

// void bfs(int n)
// {
//     queue<int> q;
//     q.push(n);
//     while(!q.empty())
//     {
//         int u = q.front();
//         q.pop();
//         for(auto nbr: adj[u])
//         {
//             if(!vis[nbr])
//             {
//                 q.push(nbr);
//                 vis[nbr]=true;
//             }
//         }
//     }
// }

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int N,E; cin>>N>>E;
    adj.resize(N);
    vis.assign(N, false);
    
    for(int i=1;i<=E;i++)
    {
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int cc=0;
    for(int i=0;i<N;i++)
    {
        if(!vis[i]) dfs(i),cc++;
    }
    // for(int i=0;i<N;i++)
    // {
    //     if(!vis[i]) bfs(i),cc++;
    // }
    cout<<cc;
    return 0;
}