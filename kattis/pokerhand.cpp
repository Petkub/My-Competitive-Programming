#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF = 4e18;
int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    map<char, int> ump;
    for(int i=0;i<5;i++)
    {
        string s; cin>>s;
        ump[s[0]]++;
    }
    int mx = -INF;
    for(auto [k,v]: ump)
    {
        mx = max(mx,v);
    }
    cout<<mx;
    return 0;
}