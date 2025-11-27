#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<string> grid;
vector<vector<int>> dist;
vector<int> dx = {-1,-1,-1, 0, 0, 1, 1, 1};
vector<int> dy = {-1, 0, 1,-1, 1,-1, 0, 1};
int n;

void bfs(int y,int x)
{
    dist[y][x]=0;
    queue<pair<int,int>> q;
    q.push({y,x});
    while(!q.empty())
    {
        auto [cy,cx] = q.front();q.pop();
        for(int i=0;i<8;i++)
        {
            int ny=cy+dy[i];
            int nx=cx+dx[i];
            if((nx<0 or nx >= n) or (ny<0 or ny >= n)) continue;
            if(grid[ny][nx]=='0') continue;
            if(dist[ny][nx]!=-1) continue;
            dist[ny][nx]=dist[cy][cx]+1;
            q.push({ny,nx});
        }
    }
}

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    cin>>n;
    dist.assign(n, vector<int>(n, -1));
    for(int i=0;i<n;i++)
    {
        string s;cin>>s;
        grid.push_back(s);
    }
    int cc=0;
    for(int y=0;y<n;y++)
    {
        for(int x=0;x<n;x++)
        {
            if(grid[y][x]=='1' and dist[y][x]==-1)
            {
                bfs(y,x);
                cc++;
            }
        }
    }
    cout<<cc;
    return 0;
}