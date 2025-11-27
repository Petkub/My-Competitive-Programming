#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<string> grid;
vector<vector<int>> dist;
vector<vector<char>> path;
const int INF=9e18; 
int n,m,sx,sy,ex,ey;
vector<int> dx={-1, 1, 0, 0};
vector<int> dy={0, 0, -1, 1};

void bfs(int y, int x)
{
    dist[y][x]=0;
    queue<pair<int,int>> q;
    q.push({y,x});
    while(!q.empty())
    {
        auto [cy,cx]=q.front(); q.pop();
        for(int i=0;i<4;i++)
        {
            int ny=cy+dy[i],nx=cx+dx[i];
            if(nx<0 or nx>=m or ny<0 or ny>=n) continue;
            if(grid[ny][nx]=='#') continue;
            if(dist[ny][nx]!=-INF) continue;

            if(i==0) path[ny][nx]='L';
            if(i==1) path[ny][nx]='R';
            if(i==2) path[ny][nx]='U';
            if(i==3) path[ny][nx]='D';
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
    dist.assign(n,vector<int>(m,-INF));
    path.assign(n,vector<char>(m));
    for(int i=0;i<n;i++)
    {
        cin>>grid[i];
        for(int j=0;j<(int)grid[i].size();j++)
        {
            if(grid[i][j]=='A') {sx=j;sy=i;}
            if(grid[i][j]=='B') {ex=j;ey=i;}
        }
    }
    bfs(sy,sx);
    if(dist[ey][ex]==-INF) cout<<"NO";
    else
    {
        cout<<"YES\n";
        cout<<dist[ey][ex]<<'\n';
        deque<char> ans;
        int cy=ey,cx=ex;
        while(cy != sy or cx != sx)
        {
            char p = path[cy][cx];
            ans.push_front(p);
            if(p=='L') cx+=1;
            else if(p=='R') cx-=1;
            else if(p=='U') cy+=1;
            else if(p=='D') cy-=1;
        }
        while(!ans.empty())
        {
            cout<<ans.front(); ans.pop_front();
        }
    }
    return 0;
}