#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<string> grid;
vector<vector<int>> dist;
vector<int> dx = {0, 0, -1, 1};
vector<int> dy = {-1, 1, 0, 0};
const int INF = 9e18;
int n,m;

void bfs(int y, int x)
{
    dist[y][x]=0;
    queue<pair<int,int>> q;
    q.push({y,x});
    while(!q.empty())
    {
        auto [cy,cx] = q.front(); q.pop();
        for(int i=0;i<4;i++)
        {
            int ny=cy+dy[i];
            int nx=cx+dx[i];
            if(ny<0 or ny>=n or nx<0 or nx>=m) continue;
            if(grid[ny][nx]=='#') continue;
            if(dist[ny][nx]!=-INF) continue; 
            dist[ny][nx]=dist[cy][cx]+1;
            q.push({ny,nx});
        }
    }
}

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    cin>>n>>m;
    grid.resize(n);
    dist.assign(n, vector<int>(m, -INF));
    for(int i=0;i<n;i++)
    {
        cin>>grid[i];
    }
    int cc=0;
    for(int y=0;y<n;y++)
    {
        for(int x=0;x<m;x++)
        {
            if(dist[y][x]!=-INF or grid[y][x]=='#') continue;
            bfs(y,x);
            cc++;
        }
    }
    cout<<cc;
    return 0;
}