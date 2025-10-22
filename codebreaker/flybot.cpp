#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define vvi vector<vi>
int H,W;
vector<string> arr;
vector<vector<bool>> path;
vvi memo;
const int MOD=1000000007;

int solve(int y, int x)
{
    if(y<0 or x<0) return 0;
    if(!path[y][x]) return 0;
    if(x==0 and y==0) return 1;
    if(memo[y][x]!=-1) return memo[y][x];
    return memo[y][x]=(solve(y-1,x)+solve(y,x-1))%MOD;
}

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    cin>>H>>W;
    memo.assign(H+1, vi(W+1,-1));
    path.assign(H+1, vector<bool>(W+1,true));
    for(int i=0;i<H;i++)
    {
        string s;cin>>s;
        arr.push_back(s);
    }
    for(int y=0;y<H;y++)
    {
        for(int x=0;x<W;x++)
        {
            if(arr[y][x]=='X')
            {
                path[y][x]=false;
            }
        }
    }

    cout<<solve(H-1,W-1);
    return 0;
}