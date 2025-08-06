#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vb = vector<bool>;
using vvi = vector<vi>;
const int INF=2e9;
int N,E;
vvi adj;
vb vis;

void dfs(int n)
{
    vis[n]=true;
    for(auto &u: adj[n])
    {
        if(!vis[u]) dfs(u);
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
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int cc=0;
    for(int i=1;i<=N;i++)
    {
        if(!vis[i])
        {
            dfs(i);
            cc++;
        }
    }
    cout<<cc; 
    return 0;
}