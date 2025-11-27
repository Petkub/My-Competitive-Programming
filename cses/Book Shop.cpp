#include<bits/stdc++.h>
using namespace std;
// #define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n,m; cin>>n>>m;
    vector<int> p(n+1),b(n+1);
    for(int i=1;i<=n;i++) cin>>p[i];
    for(int i=1;i<=n;i++) cin>>b[i];
    vector<vector<int>> dp(n+1, vector<int>(m+1,0));
    for(int i=1;i<=n;i++)
    {
        for(int cur=1;cur<=m;cur++)
        {
            dp[i][cur]=dp[i-1][cur];
            if(cur>=p[i])
            {
                dp[i][cur]=max(dp[i-1][cur], dp[i-1][cur-p[i]]+b[i]);
            }
        }
    }
    cout<<dp[n][m];
    return 0;
}