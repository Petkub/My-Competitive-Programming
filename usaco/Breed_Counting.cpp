#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    // freopen("bcount.in", "r", stdin);
    // freopen("bcount.out", "w", stdout);

    cin.tie(0);ios::sync_with_stdio(0);
    int n,q; cin>>n>>q;
    vector<int> pfx1(n+1,0),pfx2(n+1,0),pfx3(n+1,0);
    for(int i=1;i<=n;i++)
    {
        int m;cin>>m;
        pfx1[i]=pfx1[i-1];
        pfx2[i]=pfx2[i-1];
        pfx3[i]=pfx3[i-1];
        if(m==1)pfx1[i]++;
        else if(m==2)pfx2[i]++;
        else pfx3[i]++;
    }
    while(q--)
    {
        int l,r;cin>>l>>r;
        cout<<pfx1[r]-pfx1[l-1]<<" "<<pfx2[r]-pfx2[l-1]<<" "<<pfx3[r]-pfx3[l-1]<<'\n';
    }
    return 0;
}