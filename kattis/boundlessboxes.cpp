#include<bits/stdc++.h>
using namespace std;
// #define int long long
vector<int> dx = {-1, -1, -1, 1, 1, 1, 0 ,0};
vector<int> dy = {0, 1, -1, 0, 1, -1, 1 ,-1};

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int m,n,s; cin>>m>>n>>s;
    vector<vector<int>> dist(m+1, vector<int>(n+1, -1));
    queue<pair<int,int>> q;
    while(s--)
    {
        int r,c; cin>>r>>c;
        dist[r][c]=1;
        q.emplace(r,c);
    }   
    while(!q.empty())
    {
        auto [y,x]=q.front();
        q.pop();
        for(int i=0;i<8;i++)
        {
            int ny=y+dy[i];
            int nx=x+dx[i];
            if(ny<1 or ny>m or nx<1 or nx>n) continue;
            if(dist[ny][nx] != -1) continue;
            dist[ny][nx] = dist[y][x]+1;
            q.emplace(ny,nx);
        }
    }
    int mx = (int)(-4e18);
    for(int i=1;i<=m;i++)
    {
        mx = max(mx,*max_element(dist[i].begin(), dist[i].end()));
    }
    cout<<mx;
    return 0;
}