#include<bits/stdc++.h>
using namespace std;
#define int long long

vector<vector<int>> adj; 

int32_t main()
{
    int n,e;
    cin>>n>>e;
    adj.resize(n+1);
    for(int i=1;i<=e;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=1;i<=n;i++)
    {
        cout<<i<<"-> ";
        for(auto nbr: adj[i])
        {
            cout<<nbr<<" ";
        }
        cout<<"\n";
    }
    return 0;
}