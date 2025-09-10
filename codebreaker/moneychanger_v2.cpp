#include<bits/stdc++.h>
using namespace std;
#define int long long

vector<int> coins;
vector<int> memo;
const int INF = 9e18;
const int MAX_N = 1e5+5;

int solve(int x)
{
    if (x<0) return INF;
    if (x==0) return 0;
    if (memo[x] != INF) return memo[x];
    memo[x]=INF;
    for (auto c: coins)
    {
        memo[x]=min(memo[x], solve(x-c)+1);
    }
    return memo[x];
}   

int32_t main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    int n,v;cin>>n>>v;
    coins.resize(n);
    memo.assign(MAX_N, INF);
    for(int i=0;i<n;i++) cin>>coins[i];
    int cnt=solve(v);
    cout<<(cnt!=INF? cnt:-1);
    return 0;
}