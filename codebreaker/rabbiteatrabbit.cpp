#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n,k;cin>>n>>k;
    vector<int> a(n+1),dp(n+1,0);
    for(int i=1;i<=n;i++)cin>>a[i];
    dp[1]=max(0LL,a[1]);
    for(int i=2;i<=n;i++)
    {
        dp[i]=max(dp[i-2]+a[i], dp[i-1]);
    }
    cout<<dp[n];
    return 0;
}