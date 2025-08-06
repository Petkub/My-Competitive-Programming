#include<bits/stdc++.h>
using namespace std;
/*---Vector---*/
vector<vector<int>> adj;
vector<bool> vis;
/*
---STATIC ARRAY--- :)
const int MAX_N = 1000005;
vector<int> adj[MAX_N]
bool vis[MAX_N]
*/
int N,E; //N:Node, E:Edge

void bfs(int n)
{
    vis[n]=true;
    queue<int> q;
    q.push(n);
    while(q.empty())
    {
        int u=q.front();
        q.pop();
        for(auto &nbr: adj[u])
        {
            if(!vis[nbr])
            {
                vis[nbr]=true;
                q.push(nbr);
            }
        }
    }
}

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    cin>>N>>E;
    adj.resize(N);
    vis.assign(N, false);
    for(int i=1;i<=E;i++)
    {
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(0);
    return 0;
}