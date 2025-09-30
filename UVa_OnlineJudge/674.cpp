#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> coins = {50, 25, 10, 5, 1};
const int INF=9e18;

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    vector<int> dp(7500,0);
    dp[0]=1;
    for(auto &c: coins)
    {
        for(int i=1;i<=7500;i++)
        {
            if(i-c>=0)
            {
                dp[i] += dp[i-c];
            }
        }
    }
    int m;
    while(cin>>m)
    {
        int cnt=0;
        cout<<dp[m]<<'\n';
    }
    return 0;
}