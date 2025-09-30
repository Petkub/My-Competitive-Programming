#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF = 9e18;
vector<int> coins = {1, 3, 4};

int solve(int x)
{
    if (x < 0) return INF;
    if (x == 0) return 0;
    int ans = INF;
    for (auto coin: coins)
    {
        ans = min(ans, 1 + solve(x-coin));
    }
    return ans;
}

int32_t main()
{
    cout<< "m = 6: " << solve(6)<<" coins"<<endl;
    cout<< "m = 10: " << solve(10)<<" coins"<<endl;
    cout<< "m = 25: " << solve(25)<<" coins"<<endl;
    cout<< "m = 60: " << solve(60)<<" coins"<<endl;
    return 0;
}