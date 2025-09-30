#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int q;cin>>q;
    while(q--)
    {
        int n; cin>>n;
        vector<string> grid;
        vector<vector<bool>> path(2, vector<bool>(n, true));
        for(int i=0;i<2;i++) cin>>grid[i];
        pair<int,int> start;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='S') start = {i,j};
                if(grid[i][j]=='#') path[i][j]=false;
            }
        }
        vector<int> dx = {1, -1};
        vector<int> dy = {1, -1};
        bool finished = false;
        for(int s=start.first;s<2;s++)
        {
            
        }
    }
    return 0;
}