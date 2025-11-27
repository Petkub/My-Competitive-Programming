#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n; cin>>n;
    vector<int> v(n+1,0);
    for(int i=1;i<=n;i++)
    {
        int x; cin>>x;
        v[x]=1;
    }
    for(int i=1;i<=n;i++)
    {
        if(v[i]==0) cout<<i;
    }
    return 0;
}