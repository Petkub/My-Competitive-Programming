#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int N,E;
    cin>>N>>E;
    vector<vector<int>> adj(N, vector<int>(N, 0));
    for(int i = 0;i<E;i++)
    {
        int u,v; cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    return 0;
}