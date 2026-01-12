#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n,x;cin>>n>>x;
    vector<int> v(n+1,0),pfx(n+1,0);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        pfx[i]=v[i]+pfx[i-1];
    }
    for (int i=1;i<=n;i++)
    {
        
    }
    return 0;
}