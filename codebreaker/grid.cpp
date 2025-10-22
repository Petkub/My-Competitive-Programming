#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD=1e9+7;

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int h,w; cin>>h>>w;
    vector<string> arr;
    vector<vector<bool>> grid(h, vector<bool>(w, true));
    for(int i=0;i<h;i++)
    {
        string l;cin>>l;
        arr.push_back(l);
        for(int j=0;j<w;j++)
        {
            if(arr[i][j]=='#') grid[i][j]=false;
        }
    }
    vector<vector<int>> dp(h, vector<int>(w, 0));
    dp[0][0]=1;
    for(int y=0;y<h;y++)
    {
        for(int x=0;x<w;x++)
        {
            if(y==0 and x==0) continue;
            if(!grid[y][x]) continue;
            if(y-1>=0) dp[y][x]+=dp[y-1][x]%MOD;
            if(x-1>=0) dp[y][x]+=dp[y][x-1]%MOD;
            dp[y][x]%=MOD;
        }
    }
    cout<<dp[h-1][w-1];
    return 0;
}