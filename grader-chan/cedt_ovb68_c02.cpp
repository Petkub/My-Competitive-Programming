#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);
    int n;cin>>n;
    int mx=1,mn=10000;
    int tot = 0;
    for (int i=1;i<=n;i++)
    {
        int p;cin>>p;
        tot+=p;
        mx=max(mx,p);
        mn=min(mn,p);
    }
    int ans=mn+mx+((tot+(n-1))/n);
    cout<<ans;
    return 0;
}