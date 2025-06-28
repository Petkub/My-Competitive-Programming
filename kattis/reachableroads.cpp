#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool> vis;
int M,R;

void dfs(int n)
{
    vis[n]=true;
    for(int &nbr: adj[n])
    {
        if(!vis[nbr]) dfs(nbr);
    }
}

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int N;cin>>N;
    while(N--)
    {
        cin>>M>>R;
        adj.resize(M);
        vis.assign(M,false);
        for(int i=0;i<R;i++)
        {
            int u,v;cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int cc=0;
        for(int i=0;i<M;i++)
        {
            if(!vis[i])
            {
                dfs(i);
                cc++;
            }
        }
        cout<<cc-1<<'\n';
        adj.clear();vis.clear();
    }
    return 0;
}