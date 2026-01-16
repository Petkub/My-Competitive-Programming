#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n,q; cin>>n>>q;
    vector<int> v(n+1),pf(n+1,0);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        pf[i]=v[i]+pf[i-1];
    }
    while(q--)
    {
        int l,r; cin>>l>>r;
        cout<<pf[r]-pf[l-1]<<'\n';
    }
    return 0;
}