#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool> vis;

void dfs(int n)
{
    vis[n]=true;
    cout<<"visitting "<<n<<'\n';
    for(int &v: adj[n])
    {
        if(!vis[v])
        {
            dfs(v);
        }
    }
}

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int V=6,E=5;
    adj.resize(V+1);
    vis.assign(V+1, false);
/*
1 2
2 4
2 3
4 6
4 5
*/
    for(int i=1;i<=E;i++)
    {
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
    return 0;
}