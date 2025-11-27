#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int x,n; cin>>x>>n;
    int tot = x * (n+1);
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int p; cin>>p;
        cnt+=p;
    }
    cout<<tot-cnt;
    return 0;
}