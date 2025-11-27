#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int>> grid;
vector<pair<int,int>> dir = {{-1,-2},{1,-2},{-1,2},{1,2},{-2,-1},{-2,1},{2,-1},{2,1}};
vector<vector<int>> dist;
int n;
int sr,sc,er,ec;
bool can=false;
void bfs(int y, int x)
{
    dist[y][x]=0;
    queue<pair<int,int>> q;
    q.push({y,x});

    while(!q.empty())
    {
        auto [cy, cx] = q.front(); q.pop();
        for(int i=0;i<8;i++)
        {
            auto [dy, dx] = dir[i];
            int ny = cy+dy, nx=cx+dx;
            if(ny<0 or ny>=n or nx<0 or nx>=n) continue;
            if(grid[ny][nx]==-1) continue;
            if(dist[ny][nx]!=-1) continue;

            dist[ny][nx] = dist[cy][cx]+1;
            if(ny==er and nx==ec)
            {
                can=true; return;
            }
            q.push({ny,nx});
        }
    }
}

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    cin>>n;
    grid.assign(n, vector<int>(n, 0));
    dist.assign(n, vector<int>(n, -1));
    cin>>sr>>sc;
    cin>>er>>ec;
    sr--,sc--,er--,ec--;
    int p; cin>>p;
    for(int i=0;i<p;i++)
    {
        int r,c;cin>>r>>c;
        grid[--r][--c]=-1;
    }

    bfs(sr,sc);
    int mx=0;
    for(int y=0;y<n;y++)
    {
        mx=max(mx,*max_element(dist[y].begin(),dist[y].end()));
    }
    cout<<(can? mx:-1);
    return 0;
}