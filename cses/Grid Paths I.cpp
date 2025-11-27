#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD= (int)(1e9+7);

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n; cin>>n;
    vector<string> grid(n);
    vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
    for(int i=0;i<n;i++) cin>>grid[i];
    if(grid[0][0]=='*') {cout<<0; return 0;}
    dp[1][1]=1;
    for(int y=1;y<=n;y++)
    {
        for(int x=1;x<=n;x++)
        {
            if(grid[y-1][x-1]=='*') continue;
            dp[y][x]+=(dp[y-1][x]+dp[y][x-1])%MOD;
        }
    }
    cout<<dp[n][n];
    return 0;
}