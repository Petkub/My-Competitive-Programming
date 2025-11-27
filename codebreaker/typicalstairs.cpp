#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD=1000000007;

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n,m;cin>>n>>m;
    vector<int> dp(n+1,0);
    vector<bool> broke(n+1);
    for(int i=1;i<=m;i++)
    {
        int a;cin>>a;
        broke[a]=true;
    }
    dp[0]=1;
    for(int i=1;i<=n;i++)
    {
        if(broke[i]) continue;
        if(i-2<0) dp[i]=dp[i-1]%MOD;
        else dp[i]=(dp[i-1]+dp[i-2])%MOD;
    }
    cout<<dp[n];
    return 0;
}