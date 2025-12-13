#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int r,c; cin>>r>>c;
    vector<vector<int>> grid(r+1, vector<int> (c+1));
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            cin>>grid[i][j];
        }
    }
    vector<int> dx = {1, -1, 0, 0};
    vector<int> dy = {0, 0, 1, -1};
    int tot=grid[1][1];
    queue<pair<int,int>> q;
    q.emplace(1, 1);
    grid[1][1] = -1;
    while(!q.empty())
    {
        auto [cy, cx] = q.front();
        q.pop();
        int mx = (int)(-4e18);
        int ey=0,ex=0;
        for(int i=0;i<4;i++)
        {
            int ny = cy + dy[i];
            int nx = cx + dx[i];
            if (ny < 1 or ny > r or nx < 1 or nx > c) continue;
            if (grid[ny][nx]==-1) continue;
            if(grid[ny][nx] > mx)
            {
                mx = grid[ny][nx];
                ey = ny;
                ex = nx;
            }
        }
        if (!ey and !ex) break;
        if (ey == r and ex == c) {tot += grid[r][c]; break;}
        tot += mx;
        grid[ey][ex] = -1;
        q.emplace(ey, ex);
    }
    cout<<tot;
    return 0;
}