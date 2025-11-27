#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n,k;cin>>n>>k;
    vector<int> a(n+1),b(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i];
    vector<int> dp1(n+1),dp2(n+1);
    dp1[1]=a[1],dp2[1]=b[1];
    for(int i=2;i<=n;i++)
    {
        dp1[i]=max(dp1[i-1]+a[i],dp2[i-1]+a[i]-k);
        dp2[i]=max(dp2[i-1]+b[i],dp1[i-1]+b[i]-k);
    }
    cout<<max(dp1[n],dp2[n]);
    return 0;
}