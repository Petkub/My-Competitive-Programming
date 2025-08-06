#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF=9e18;

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n,v;cin>>n>>v;
    vector<int> arr(n),dp(v+1,INF);
    for(auto &e: arr) cin>>e;
    dp[0]=0;
    for(int i=1;i<=v;i++)
    {
        for(int &c: arr)
        {
            if(i-c >= 0)
            {
                dp[i]=min(dp[i],dp[i-c]+1);
            }
        }
    }
    if(dp[v]==INF) cout<<-1;
    else cout<<dp[v];
    
    return 0;
}