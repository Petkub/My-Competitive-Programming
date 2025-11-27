#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF=9e18;

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int N,W; cin>>N>>W;
    vector<int> w(N+1),v(N+1);
    for(int i=1;i<=N;i++)
    {
        cin>>w[i]>>v[i];
    }
    vector<vector<int>> dp(N+1, vector<int>(W+1,0));
    for(int i=1;i<=N;i++)
    {
        for(int cap=0;cap<=W;cap++)
        {
            dp[i][cap]=dp[i-1][cap];
            if(cap>=w[i])
            {
                dp[i][cap]=max(dp[i][cap], dp[i-1][cap-w[i]]+v[i]);
            }
        }
    }
    cout<<dp[N][W];
    return 0;
}