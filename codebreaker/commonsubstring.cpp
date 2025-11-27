#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    string a,b; cin>>a>>b;
    int n=a.length(),m=b.length();
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    int mx=0;
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i-1]==b[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
                mx=max(mx,dp[i][j]);
            }
        }
    }
    cout<<mx;
    return 0;
}