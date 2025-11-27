#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int>> grid;
vector<vector<int>> ans;
vector<vector<bool>> vis;
vector<int> dx = {-1, 1, 0, 0};
vector<int> dy = {0, 0, -1, 1};
int H,W,X,Y,T;

void bfs(int y,int x)
{
    vis[y][x]=true;
    queue<pair<int,int>> q;
    q.push({y,x});
    ans[y][x]=1;
    while(!q.empty())
    {
        auto [cy,cx]=q.front(); q.pop();
        for(int i=0;i<4;i++)
        {
            int ny=cy+dy[i],nx=cx+dx[i];
            if(ny<0 or ny>=H or nx<0 or nx>=W) continue;
            if(vis[ny][nx]) continue;
            
            if(abs(grid[ny][nx]-grid[y][x]) <= T)
            {
                vis[ny][nx] = true;
                ans[ny][nx] = 1;
                q.push({ny, nx});
            }
        }
    }
}

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    cin>>H>>W>>X>>Y>>T;
    X--;Y--;
    grid.resize(H,vector<int>(W));
    vis.assign(H,vector<bool>(W,false));
    ans.assign(H,vector<int>(W,0));
    for(int i=0;i<H;i++)
    {
        for(int j=0;j<W;j++)
        {
            cin>>grid[i][j];
        }
    }
    bfs(X,Y);
    for(int y=0;y<H;y++)
    {
        for(int x=0;x<W;x++)
        {
            cout<<ans[y][x];
        }
        cout<<"\n";
    }
    return 0;
}