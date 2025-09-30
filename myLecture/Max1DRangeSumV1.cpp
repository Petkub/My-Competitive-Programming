#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    vector<int> arr = {4, -5, 4, -3, 4, 4, -4};
    int n = arr.size();

    vector<int> dp(n);
    int mx = arr[0];
    dp[0]=arr[0];
    
    for (int i=1;i<n;i++)
    {
        dp[i] = max(arr[i], arr[i] + dp[i-1]);
        mx = max(mx, dp[i]);
    }
    cout<<mx;
    return 0;
}