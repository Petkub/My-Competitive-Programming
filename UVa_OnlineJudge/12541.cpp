#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n; cin>>n;
    vector<pair<int,string>> bd;
    for(int i=0;i<n;i++)
    {
        string s;cin>>s;
        int d,m,y;
        cin>>d>>m>>y;
        int tot=y*10000000+m*100+d;
        bd.push_back({tot,s});
    }
    sort(bd.begin(),bd.end());
    cout<<bd.back().second<<'\n';
    cout<<bd.front().second<<'\n';
    return 0;
}