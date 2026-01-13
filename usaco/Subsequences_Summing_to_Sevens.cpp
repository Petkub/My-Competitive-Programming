#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    freopen("div7.in", "r", stdin);
    freopen("div7.out", "w", stdout);
    int n; cin>>n;
    vector<int> pos(7,-1);
    pos[0] = 0;
    int pf=0;
    int mx = -1;
    for(int i=1;i<=n;i++)
    {
        int x; cin>>x;
        pf+=x;
        if(pos[pf%7] != -1) mx=max(mx,i-pos[pf%7]);
        else pos[pf%7]=i;
    }
    cout<<mx;
    return 0;
}