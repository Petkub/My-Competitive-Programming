#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int MOD=1e9+7;
const int MAX_N=1e5;
vector<ll> dp(MAX_N);

void fact()
{
    dp[0]=dp[1]=1;
    for(int i=2;i<=MAX_N;i++)
    {
        dp[i]=(i*dp[i-1])%MOD;
    }
}

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    ll N;cin>>N;
    fact();
    while(N--)
    {
        ll n;cin>>n;
        cout<<dp[n]<<'\n';
    }
    return 0;
}