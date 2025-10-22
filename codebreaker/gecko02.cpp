#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define vvi vector<vi>
const int INF = 9e18;
int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int h,w; cin>>h>>w;
    vvi arr(h+1, vi(w+1, 0));
    for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=w;j++)
        {
            cin>>arr[i][j];
        }
    }
    vvi dp(h+1,vi(w+1,-INF));
    for(int x=1;x<=w;x++) dp[1][x]=arr[1][x];
    for(int y=2;y<=h;y++)
    {
        for(int x=1;x<=w;x++)
        {
            dp[y][x]=max({dp[y-1][x-1],dp[y-1][x],dp[y-1][x+1]})+arr[y][x];
        }
    }
    int mx=-INF;
    for(int x=1;x<=w;x++)
    {
        mx=max(mx,dp[h][x]);
    }
    cout<<mx;
    return 0;
}