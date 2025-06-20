#include<bits/stdc++.h>
using namespace std;
map<char,vector<char>> adj;
map<char, bool> vis;

void dfs(char n)
{
    vis[n]=true;
    for(auto &u: adj[n])
    {
        if(!vis[u]) dfs(u);
    }
}
int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int T;cin>>T;
    while(T--)
    {
        adj.clear(); vis.clear();
        char me;cin>>me;
        string p,tmp;
        getline(cin,tmp);
        while(getline(cin,p) && !p.empty())
        {
            adj[p[0]].push_back(p[1]);
            adj[p[1]].push_back(p[0]);
        }
        int cc=0;
        for(char ch='A';ch<=me;ch++)
        {
            if(!vis[ch])
            {
                cc++;
                dfs(ch);
            }
        }
        cout<<cc<<'\n';
        if(T) cout<<'\n';
    }
    return 0;
}