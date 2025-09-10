#include<bits/stdc++.h>
using namespace std;
#define int long long

int fast_expo(int b, int p, int m)
{
    if (p == 0) return 1;
    int tmp = fast_expo(b, p>>1, m);
    tmp = ((__int128_t)tmp * tmp % m);
    if (p&1) tmp = ((__int128_t)tmp * b % m);
    return tmp;
}

int32_t main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;cin>>n;
    while(n--)
    {
        int b,p,m; cin>>b>>p>>m;
        b = b % m;
        // int ans = 1;
        // while(p>0)
        // {
        //     if(p&1) ans = ((__int128_t)ans * b % m);
        //     b = ((__int128_t)b * b % m);
        //     p >>= 1; 
        // }
        int ans = fast_expo(b, p, m);
        cout<<ans<<'\n';
    }
    return 0;
}