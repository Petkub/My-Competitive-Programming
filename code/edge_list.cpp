#include<bits/stdc++.h>
using namespace std;
int N,E;
struct Edge
{
    int u, v, w;
};

vector<Edge> EL;
int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    cin>>N>>E;
    EL.resize(E);
    for(int i=0;i<E;i++)
    {
        int u,v,w; cin>>u>>v>>w;
        EL[i] = {u,v,w};
    }
    return 0;
}