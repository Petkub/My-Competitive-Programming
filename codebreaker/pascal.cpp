#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MAX_R=25;
const int MAX_C=25;
int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int r,c;cin>>r>>c;
    vector<vector<int>> dp(MAX_R+1, vector<int>(MAX_C+1,0));
    dp[1][1]=1;
    for(int i=2;i<=MAX_R;i++)
    {
        for(int j=1;j<=MAX_C;j++)
        {
            dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
        }
    }
    cout<<dp[r][c];
    return 0;
}