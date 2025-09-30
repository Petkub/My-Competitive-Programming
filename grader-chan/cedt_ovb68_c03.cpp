#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n; cin>> n;
    int tot=0;
    int mx=-1,mn=101;
    for(int i=1;i<=n;i++)
    {
        int s;cin>>s;
        tot+=s;
        mx=max(mx,s);
        mn=min(mn,s);
    }
    cout<<mx<<'\n';
    cout<<mn<<'\n';
    cout<<fixed<<setprecision(2)<<(double)tot/n;
    return 0;
}