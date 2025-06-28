#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool> vis;
int N,M,L;

void dfs(int n)
{
    vis[n]=true;
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
    int T;cin>>T;
    while(T--)
    {
        cin>>N>>M>>L;
        adj.resize(N+1);
        vis.assign(N+1, false);
        for(int i=1;i<=M;i++)
        {
            int u,v;cin>>u>>v;
            adj[u].push_back(v);
        }
        for(int i=1;i<=L;i++)
        {
            int z;cin>>z;
            if(!vis[z]) 
            {
                dfs(z);
            }
        }
        int cnt=0;
        for(int i=1;i<=N;i++)
        {
            if(vis[i])cnt++;
        }
        cout<<cnt<<"\n";
        adj.clear();vis.clear();
    }
    return 0;
}