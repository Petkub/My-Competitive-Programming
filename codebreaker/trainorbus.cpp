#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n; cin>>n;
    vector<int> a(n+1,0),b(n+1,0);
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];
    int mn=0;
    for(int i=1;i<=n;i++)
    {
        mn+=min(a[i],b[i]);
    }
    cout<<mn;
    return 0;
}