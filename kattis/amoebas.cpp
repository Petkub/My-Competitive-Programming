#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n,m; cin>>n>>m;
    vector<string> grid(n);
    for(int i=0;i<n;i++)
    {
        cin>>grid[i];
    }
    vector<vector<bool>> vis(n,vector<bool>(m,false));
    vector<int> dx = {0, 0, 1, 1, 1, -1, -1, -1};
    vector<int> dy = {-1, 1, -1, 0,1, -1, 0, 1};
    int cc=0;
    for(int y=0;y<n;y++)
    {
        for(int x=0;x<m;x++)
        {
            if(vis[y][x] or grid[y][x]=='.') continue;
            cc++;
            vis[y][x]=true;
            queue<pair<int,int>> q;
            q.emplace(y,x);
            while(!q.empty())
            {
                auto [cy, cx] = q.front(); q.pop();
                for(int i=0;i<8;i++)
                {
                    int ny = cy + dy[i];
                    int nx = cx + dx[i];
                    if(ny<0 or ny>=n or nx<0 or nx>=m) continue;
                    if(grid[ny][nx]=='.') continue;
                    if(vis[ny][nx]) continue;
        
                    q.emplace(ny,nx);
                    vis[ny][nx]=true;
                }
            }
        }
    }
    cout<<cc;
    return 0;
}