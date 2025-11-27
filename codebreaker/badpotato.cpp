#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n;cin>>n;
    vector<int> a(n),dp(n);
    for(int i=0;i<n;i++)cin>>a[i];
    dp[0]=max(0LL,a[0]);
    for(int i=1;i<n;i++)
    {
        if(a[i]==-1) dp[i]=0;
        else dp[i]=max(a[i],dp[i-1]+a[i]);
    }
    cout<<*max_element(dp.begin(),dp.end());
    return 0;
}