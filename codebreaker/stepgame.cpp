#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);
    int n; cin>>n;
    vi arr(n), dp(n);
    
    for(int i=0;i<n;i++) cin>>arr[i];
    
    dp[0]=arr[0];
    int mx=arr[0];
    for(int i=1;i<n;i++)
    {
        dp[i]=min(arr[i], dp[i-1]+arr[i]);
        mx=min(mx,dp[i]);
    }
    cout<<mx;
    return 0;
}