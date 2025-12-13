#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF = 4e18;

struct DSU
{
    vector<int> parent,size;
    
    DSU(int n): parent(n+1),size(n+1)
    {
        for(int i=1;i<=n;i++) parent[i]=i;
    }

    int find_set(int u)
    {
        if(parent[u]==u) return u;
        return parent[u] = find_set(parent[u]);
    }

    bool union_set(int u, int v)
    {
        int a = find_set(u);
        int b = find_set(v);
        if(a==b)return false;

        if(size[a]<size[b]) swap(a,b);
        parent[b]=a;
        size[a]+=size[b];
        return false;
    }

    bool same_set(int u, int v)
    {
        return find_set(u)==find_set(v);
    }
};

bool comp(tuple<int,int,int> &t1, tuple<int,int,int> &t2)
{
    return get<0>(t1) < get<0>(t2);
}

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n,m;cin>>n>>m;
    vector<tuple<int,int,int>> EL;

    for(int i=0;i<m;i++)
    {
        int u,v,w; cin>>u>>v>>w;
        EL.emplace_back(w,u,v);
    }
    sort(EL.begin(),EL.end(),comp);
    DSU dsu(n);
    int mn=INF;
    for(auto &[w,u,v]: EL)
    {
        dsu.union_set(u,v);
        if(dsu.same_set(1, n))
        {
            mn = w;
            break;
        }
    }
    cout<<mn;
    return 0;
}