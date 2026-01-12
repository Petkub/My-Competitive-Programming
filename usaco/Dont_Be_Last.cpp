#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF = 4e18;

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    freopen("notlast.in", "r", stdin);
    freopen("notlast.out", "w", stdout);
    int n; cin>>n;
    map<string,int> mp = {
        {"Bessie",0},
        {"Elsie",0},
        {"Maggie",0},
        {"Daisy",0},
        {"Gertie",0},
        {"Annabelle",0},
        {"Henrietta",0}
    };
    for(int i=0;i<n;i++)
    {
        string name;
        int m; cin>>name>>m;
        mp[name]+=m;
    }
    int mn = INF;
    for(auto p: mp)
    {
        if(p.second < mn) mn = p.second;
    }
    int mn2 = INF, cnt=0;
    string name = "";
    for(auto p: mp)
    {
        if(p.second > mn and p.second < mn2)
        {
            cnt=1;
            mn2 = p.second;
            name = p.first;
        }
        else if(p.second == mn2) cnt++;
    }

    if(mn2==INF or cnt>1) cout<<"Tie\n";
    else cout<<name<<'\n';
    return 0;
}