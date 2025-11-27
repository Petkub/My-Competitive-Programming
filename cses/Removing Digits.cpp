#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF=9e15;
int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n; cin>>n;
    vector<int> dp(n+1, INF);
    dp[0]=0;
    for(int i=1;i<=n;i++)
    {
        int tmp=i;
        while(tmp>0)
        {
            int d=tmp%10;
            tmp/=10;
            if(i-d>=0)
            {
                dp[i] = min(dp[i], 1+dp[i-d]);
            }
        }
    }
    cout<<dp[n];
    return 0;
}