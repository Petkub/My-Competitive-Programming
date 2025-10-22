#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);
    vector<int> arr = {1, 2, 0, 4, 3, 5, -1};
    int n=arr.size();
    vector<int> dp(n);
    dp[0]=1;
    int mx=1;
    for(int i=1;i<n;i++)
    {
        dp[i]=1;
        for(int j=0;j<i;j++)
        {
            if(arr[j] < arr[i])
            {
                dp[i]=max(dp[i], dp[j]+1);
            }
        }
        mx=max(mx,dp[i]);
    }
    cout<<mx<<'\n';
    return 0;
}