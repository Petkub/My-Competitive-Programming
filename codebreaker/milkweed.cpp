#include<bits/stdc++.h>
using namespace std;
#define int long long
int X,Y,MX,MY;
vector<string> grid;
vector<vector<int>> dist;
vector<int> dx = {-1,-1,-1, 0, 0, 1, 1, 1};
vector<int> dy = {-1, 0, 1,-1, 1,-1, 0, 1};
int cnt=0;

void bfs(int y,int x)
{
    dist[y][x]=0;
    queue<pair<int,int>> q;
    q.push({y,x});
    while(!q.empty())
    {
        auto [cy,cx]=q.front();q.pop();
        for(int i=0;i<8;i++)
        {
            int nx=cx+dx[i],ny=cy+dy[i];
            if(nx<0 or nx>=X or ny<0 or ny>=Y) continue;
            if(grid[ny][nx]=='*') continue;
            if(dist[ny][nx]!=-1) continue;
            dist[ny][nx]=dist[cy][cx]+1;
            cnt=max(cnt, dist[ny][nx]);
            q.push({ny,nx});
        }
    }
}

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    cin>>X>>Y>>MX>>MY;
    dist.assign(Y, vector<int>(X, -1));
    grid.resize(Y);
    vector<string> temp;
    for(int i=0;i<Y;i++)
    {
        string s;cin>>s;
        temp.push_back(s);
    }
    for(int i=0;i<Y;i++)
    {
        grid[i]=temp[Y-1-i];
    }
    MX--,MY--;
    bfs(MY,MX);
    cout<<cnt;
    return 0;
}