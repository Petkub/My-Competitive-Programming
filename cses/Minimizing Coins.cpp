#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF=9e15;

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n,x; cin>>n>>x;
    vector<int> v(n),dp(x+1,INF);
    dp[0]=0;
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=1;i<=x;i++)
    {
        for(int c: v)
        {
            if(i-c >= 0)
            {
                dp[i]=min(dp[i], 1+dp[i-c]);
            }
        }
    }
    cout<<(dp[x]==INF? -1:dp[x]);
    return 0;
}