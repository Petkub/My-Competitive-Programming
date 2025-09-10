#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD=1e9+7;
const int MAX_N=1e5+5;

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int N;cin>>N;
    vector<int> dp(MAX_N);
    dp[0] = 1;
    dp[1] = 1;
    for (int i=2;i<=MAX_N;i++)
    {
        dp[i] = i * dp[i-1] % MOD;
    }
    while(N--)
    {
        int n;cin>>n;
        cout<<dp[n]<<'\n';
    }
    return 0;
}