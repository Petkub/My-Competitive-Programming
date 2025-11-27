#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int ans=0;
    for(int i=1;i<n;i++)
    {
        if(v[i]<v[i-1])
        {
            ans += v[i-1]-v[i];
            v[i]=v[i-1];
        }
    }
    cout<<ans;
    return 0;
}