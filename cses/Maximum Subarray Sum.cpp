#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n; cin>>n;
    int mn=0,mx=-4e18,cur=0;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        cur += x;
        mx = max(mx, cur - mn);
        mn = min(mn, cur);
    }
    cout<<mx;
    return 0;
}