#include<bits/stdc++.h>
using namespace std;

int32_t main()
{

    cin.tie(0);ios::sync_with_stdio(0);
    int n,q,tot=0; cin>>n>>q;
    vector<int> a(n+1),pfx(n+1,0);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        pfx[i]=pfx[i-1]+a[i];
        tot+=a[i];
    }

    while(q--)
    {
        int l,r,k;cin>>l>>r>>k;
        int cur=pfx[r]-pfx[l-1];
        int v=(r-l+1)*k;
        int ans=tot+(v-cur);
        cout<<(ans&1? "YES\n":"NO\n");
    }
    return 0;
}