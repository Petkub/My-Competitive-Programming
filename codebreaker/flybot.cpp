#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD=1e9+7;
int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int h,w;cin>>h>>w;
    vector<string> arr;
    for(int i=0;i<h;i++)
    {
        string s;cin>>s;
        arr.push_back(s);
    }
    vector<vector<int>> dp(h+1,vector<int>(w+1,0));
    dp[1][1]=1;
    for(int y=1;y<=h;y++)
    {
        for(int x=1;x<=w;x++)
        {
            if(y==1 and x==1)continue;
            if(arr[y-1][x-1]=='X')continue;
            dp[y][x]=(dp[y-1][x]+dp[y][x-1])%MOD;
        }
    }
    cout<<dp[h][w];
    return 0;
}