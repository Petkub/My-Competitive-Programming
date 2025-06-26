#include<bits/stdc++.h>
using namespace std;
vector<string> grid;
vector<vector<bool>> vis;
int R,C;

bool valid(int i, int j)
{
    return (i >= 0 and i < C) and (j >= 0 and j < R);
}

void bfs(int i, int j)
{
    vis[i][j]=true;
    queue<pair<int,int>> q;
    while (!q.empty())
    {
        int c_x=q.front().first;
        int c_y=q.front().second;
        q.pop();

        int dx[]={-1,1,0,0};
        int dy[]={0,0,-1,1};
        for(int i=0;i<4;i++)
        {
            int nx = c_x + dx[i];
            int ny = c_y + dy[i];
            if(valid(nx,ny) and !vis[nx][ny] and grid[nx][ny]=='H')
            {
                q.push({nx, ny});
                vis[nx][ny]=true;
            }
        }
    }
    
}

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    cin>>R>>C;
    grid.resize(R);
    vis.assign(R, vector<bool>(C, false));
    for(int i =0;i<R;i++)
    {
        cin>>grid[i];
    }

    int cnt=0;
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;i++)
        {
            if(!vis[i][j] and grid[i][j]=='H')
            {
                cnt++;
                bfs(i, j);
            }
        }
    }
    
    return 0;
}