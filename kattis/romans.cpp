#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    long double x; cin>>x;
    long double ans = x*1000.0L*5280.0L/4854.0L;
    cout<<llround(ans);
    return 0;
}