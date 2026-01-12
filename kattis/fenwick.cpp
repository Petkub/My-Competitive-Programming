#include<bits/stdc++.h>
using namespace std;
#define int long long

struct Fenwick
{
    int n;
    vector<int> tree;
    Fenwick(int _n)
    {
        n = _n;
        tree.assign(n+1, 0);
    }

    int sum(int k)
    {
        int tot = 0;
        while(k >= 1)
        {
            tot+=tree[k];
            k-=k&-k;
        }
        return tot;
    }

    void update(int k, int x)
    {
        while(k <= n)
        {
            tree[k] += x;
            k+=k&-k;
        }
    }
};

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n,q; cin>>n>>q;
    Fenwick ft(n);
    while(q--)
    {
        char cmd; cin>>cmd;
        if(cmd=='+')
        {
            int a,b; cin>>a>>b;
            a++;
            ft.update(a, b);
        }
        else
        {
            int x; cin>>x;
            if (x==0) {cout<<0<<'\n'; continue;}
            cout<<ft.sum(x)<<'\n';
        }
    }
    return 0;
}