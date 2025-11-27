#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD=1e9+7;

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n,x;cin>>n>>x;
    vector<int> coin(n), dp(x+1,0);
    for(int i=0;i<n;i++) cin>>coin[i];
    dp[0]=1;
    for(int i=1;i<=x;i++)
    {
        for(int c:coin)
        {
            if(i-c>=0)
            {
                dp[i]=(dp[i]+dp[i-c])%MOD;
            }
        }
    }
    cout<<dp[x];
    return 0;
}