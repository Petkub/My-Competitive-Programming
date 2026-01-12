#include<bits/stdc++.h>
using namespace std;
#define int long long
int mod;

struct FenwickTree
{
    int n;
    vector<int> bit;
    FenwickTree(int _n)
    {
        n = _n;
        bit.assign(n+1, 0);
    }

    void update(int idx, int v)
    {
        while(idx <= n)
        {
            bit[idx] += v;
            bit[idx] %= mod;
            idx += idx & -idx;
        }
    }

    int sum(int idx)
    {
        int tot = 0;
        while(idx >= 1)
        {
            tot += bit[idx];
            tot %= mod;
            idx -= idx&-idx;
        }
        return tot;
    }

    void range_update(int l, int r, int v)
    {
        update(l, v%mod);
        update(r+1, (mod-v)%mod);
    }
};

int32_t main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n,q,k; cin>>n>>q>>k;
    mod = pow(2, k);
    FenwickTree ft(n);
    while(q--)
    {
        int cmd; cin>>cmd;
        if (cmd==0)
        {
            int d,s;cin>>d>>s;
            ft.range_update(d,n,s);
        }
        else
        {
            int d; cin>>d;
            cout<<ft.sum(d)<<'\n';
        }
    }
    return 0;
}