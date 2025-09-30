#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF = 9e18;
vector<int> coins = {1, 3, 4};

int solve(int x)
{
    vector<int> dp(x+1, INF);
    dp[0] = 0;
    for (int i=1;i<=x;i++)
    {
        for(auto c: coins)
        {
            if (i - c >= 0)
            {
                dp[i] = min(dp[i], 1 + dp[i - c]);
            }
        }
    }
    return dp[x];
}

int32_t main()
{
    cout<< "m = 6: " << solve(6)<<" coins"<<endl;
    cout<< "m = 10: " << solve(10)<<" coins"<<endl;
    cout<< "m = 25: " << solve(25)<<" coins"<<endl;
    cout<< "m = 60: " << solve(60)<<" coins"<<endl;
    return 0;
}