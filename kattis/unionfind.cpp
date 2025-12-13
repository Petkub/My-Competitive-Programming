#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#define debug(x) cerr << #x << " = " << (x) << '\n'
#else
#define debug(x)
#endif
#define int long long

struct DSU
{
    int n;
    vector<int> parent,sz;

    DSU(int n): n(n), parent(n+1),sz(n+1)
    {
        for(int i=0;i<n;i++) parent[i]=i;
    }

    int root(int &u)
    {
        if(parent[u] == u) return u;
        return parent[u] = root(parent[u]);
    }

    void merge(int &u, int &v)
    {
        int a = root(u);
        int b = root(v);
        if(a==b) return;
        if(sz[a] < sz[b]) swap(a,b);
        parent[b] = a;
        sz[a] += sz[b];
    }

    bool same(int &u, int &v)
    {
        return root(u)==root(v);
    }
};

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n,m; cin>>n>>m;
    DSU dsu(n);
    while(m--)
    {
        string s;
        int a,b;
        cin>>s>>a>>b;
        if(s=="?")
        {
            cout<<(dsu.same(a,b)? "yes\n":"no\n");
        }
        else
        {
            dsu.merge(a,b);
        }
    }
    return 0;
}