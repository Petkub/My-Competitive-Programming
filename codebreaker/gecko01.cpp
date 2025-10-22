#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define vvi vector<vi>
const int INF = 9e18;
vvi arr,memo;
int h,w;

int solve(int y, int x)
{
    if(x<0 or x>=w) return -INF;
    if(y==0) return arr[y][x];
    if(memo[y][x]!=-1) return memo[y][x];
    return memo[y][x]=max({solve(y-1,x),solve(y-1,x-1),solve(y-1,x+1)})+arr[y][x];
}

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    cin>>h>>w;
    arr.assign(h,vi(w, 0));
    memo.assign(h,vi(w, -1));
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            cin>>arr[i][j];
        }
    }
    memo[0][0]=arr[0][0];
    int mx=-INF;
    for(int x = 0;x<w;x++)
    {
        mx=max(mx,solve(h-1,x));
    }
    cout<<mx;
    return 0;
}