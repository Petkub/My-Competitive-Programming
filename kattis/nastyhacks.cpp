#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int tc; cin>>tc;
    while(tc--)
    {
        int r,e,c; cin>>r>>e>>c;
        if(r > e - c) cout<<"do not advertise";
        else if(r < e - c) cout<<"advertise";
        else cout<<"does not matter";
        cout<<'\n';
    }
    return 0;
}