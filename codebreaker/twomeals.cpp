#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF=9e18;

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n;cin>>n;
    vector<int> a(n+1),dp_l(n+1,0),dp_r(n+2,0);
    for(int i=1;i<=n;i++)cin>>a[i];
    int endL=0;
    for(int i=1;i<=n;i++)
    {
        endL=max(0LL,endL+a[i]);
        dp_l[i]=max(dp_l[i-1],endL);
    }
    int endR=0;
    for(int i=n;i>=1;i--)
    {
        endR=max(0LL,endR+a[i]);
        dp_r[i]=max(dp_r[i+1],endR);
    }
    int mx=0;
    for(int i=1;i<n;i++)
    {
        mx=max(mx,dp_l[i]+dp_r[i+1]);
    }
    cout<<mx;
    return 0;
}