#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
int const MOD = 13371337;

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n,v;cin>>n>>v;
    vector<int> a(n);
    vector<vector<int>> dp(n+1, vector<int>(v+1, 0));
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<=v;i++) dp[0][i]=1;
    for(auto coin: a)
    {
        for(int j=0;j<=v;j++)
        {
            if(j-coin>=0)
            {
                dp[coin][j]+=dp[j-coin][j];
            }
        }
    }
    cout<<dp[n][v];
    return 0;
}

// int32_t main()
// {
//     cin.tie(0); ios::sync_with_stdio(0);
//     int n,v;
//     cin>>n>>v;
//     vi arr(n);
//     for(int i=0;i<n;i++) cin>>arr[i];
//     vi dp(v+1,0);
//     dp[0]=1;
//     for(auto c:arr)
//     {
//         for(int i=1;i<=v;i++)
//         {
//             if(i-c>=0) dp[i]=(dp[i]+dp[i-c])%MOD;
//         }
//     }
//     cout<<dp[v];
//     return 0;
// }