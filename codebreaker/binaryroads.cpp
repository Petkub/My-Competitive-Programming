#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF = 4e18;

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n,m; cin>>n>>m;
    vector<vector<int>> adj(n*2);

    for(int i=0;i<m;i++)
    {
        int u,v,w; cin>>u>>v>>w;
        int a1 = u*2 + w;
        int b1 = v*2 + (w^1);
        adj[a1].push_back(b1);
        int a2 = v*2 + w;
        int b2 = u*2 + (w^1);
        adj[a2].push_back(b2);
    }

    vector<int> dist(2*n, -1);
    queue<int> q;
    dist[0] = 0;
    dist[1] = 0;
    q.push(0);
    q.push(1);

    while(!q.empty())
    {
        int u = q.front(); q.pop();

        for(int v: adj[u])
        {
            if(dist[v]==-1)
            {
                dist[v] = dist[u]+1;
                q.push(v);
            }
        }
    }
    int n1 = dist[(n-1)*2];
    int n2 = dist[(n-1)*2+1];
    if(n1!=-1 and n2!=-1) cout<<min(n1,n2);
    else if(n1!=-1) cout<<n1;
    else cout<<n2;
    return 0;
}