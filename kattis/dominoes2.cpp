#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vi>;
vii adj;
vector<bool> vis;
int n,m,l;

void bfs(int n)
{
    vis[n]=true;
    queue<int> q;
    q.push(n);
    while(!q.empty())
    {
        int v=q.front();q.pop();
        for(int &u:adj[v])
        {
            if(!vis[u])
            {
                q.push(u);
                vis[u]=true;
            }
        }
    }
}

int main()
{
    int T;cin>>T;
    while(T--)
    {
        cin>>n>>m>>l;
        adj.clear();vis.clear();
        adj.resize(n+1);
        vis.assign(n+1, false);
        for(int i=0;i<m;i++)
        {
            int x,y;cin>>x>>y;
            adj[x].push_back(y);
        }
        for(int i=0;i<l;i++)
        {
            int z;cin>>z;
            if(!vis[z]) bfs(z);
        }
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            if(vis[i]) cnt++;
        }
        cout<<cnt<<'\n';
    }
}