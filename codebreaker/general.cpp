#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> arr;

struct DSU
{
    int n;
    vector<int> parent,size,power;
    
    DSU(int n): n(n), parent(n+1),size(n+1, 1),power(n+1)
    {
        for(int i=1;i<=n;i++)
        {
            parent[i]=i;
            power[i]=arr[i];
        }
    }

    int find_set(int u)
    {
        if(parent[u]==u) return u;
        return parent[u]=find_set(parent[u]);
    }

    int union_set(int u, int v)
    {
        int a=find_set(u);
        int b=find_set(v);

        if (a==b) return -1;
        if(power[a] < power[b]) swap(a,b);
        parent[b] = a;
        return a;
    }
};

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n,m; cin>>n>>m;
    arr.resize(n+1);
    for(int i=1;i<=n;i++) cin>>arr[i];
    DSU dsu(n);
    while(m--)
    {
        int u,v; cin>>u>>v;
        cout<<dsu.union_set(u,v)<<'\n';
    }
    return 0;
}