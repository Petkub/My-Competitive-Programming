#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;

int main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    int n,e;
    cin>>n>>e;
    vvi AL(n+1);
    for(int i=1;i<=e;i++)
    {
        int ea, eb;
        cin>>ea>>eb;
        AL[ea].emplace_back(eb);
        AL[eb].emplace_back(ea);
    }
    for(int i=1;i<=n;i++)
    {
            for(int &nbr: AL[i])
            {
                cout<<nbr<<" ";
            }
        cout<<'\n';
    }
    return 0;
}