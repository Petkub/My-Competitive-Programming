#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> coins = {1, 3, 4};
vector<int> memo;
const int INF = 9e18;

int solve(int x)
{
    if (x < 0) return INF;
    if (x == 0) return memo[x];
    if (memo[x] != INF) return memo[x];
    int ans = INF;
    for (auto c: coins)
    {
        ans = min(ans, 1 + solve(x-c));
    }
    return memo[x] = ans;
}

int32_t main()
{
    int MAX_M = 60;
    memo.assign(MAX_M+1, INF);
    memo[0]=0;
    cout<< "m = 6: " << solve(6)<<" coins"<<endl;
    cout<< "m = 10: " << solve(10)<<" coins"<<endl;
    cout<< "m = 25: " << solve(25)<<" coins"<<endl;
    cout<< "m = 60: " << solve(60)<<" coins"<<endl;
    return 0;
}