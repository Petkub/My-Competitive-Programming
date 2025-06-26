#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
vector<string> grid;
vector<vector<bool>> vis;
int R,C;

bool valid(int x, int y)
{
    return (x >= 0 and x < R) and (y >= 0 and y < C);
}

// void bfs(int r, int c)
// {
//     queue<pii> q;
//     vis[r][c]=true;
//     q.push({r,c});

//     while(!q.empty())
//     {
//         auto [x,y] = q.front();q.pop();
//         int dx[]={-1,1,0,0};
//         int dy[]={0,0,-1,1};
//         for(int i=0;i<4;i++)
//         {
//             int nx=x+dx[i];
//             int ny=y+dy[i];
//             if(valid(nx,ny) and grid[nx][ny]=='H' and !vis[nx][ny])
//             {
//                 q.push({nx,ny});
//                 vis[nx][ny]=true;
//             }
//         }
//     }
// }

void dfs(int x, int y)
{
    if(!valid(x,y) || grid[x][y]=='.' || vis[x][y])
    {
        return;
    }
    vis[x][y]=true;
    dfs(x+1,y);
    dfs(x-1,y);
    dfs(x,y+1);
    dfs(x,y-1);
}

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    cin>>R>>C;
    grid.resize(R);
    vis.assign(R, vector<bool>(C, false));

    for(int i=0;i<R;i++)
    {
        cin>>grid[i];
    }

    int cc=0;
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            if(grid[i][j]=='H' and !vis[i][j])
            {
                cc++;
                dfs(i,j);
            }
        }
    }
    cout<<"Oh, bother. There are "<<cc<<" pools of hunny.";
    return 0;
}