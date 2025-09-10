#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    int a,p; cin>>a>>p;
    int ans=1;
    while(p>0)
    {
        if (p&1) ans*=a;
        a*=a;
        p>>=1;
    }
    cout<<ans;
    return 0;
}