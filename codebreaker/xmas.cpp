#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n;cin>>n;
    vector<int> v(n+1,0);
    for(int i=1;i<=n;i++)
    {
        int k;cin>>k;
        v[k]=i;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<v[i]<<'\n';
    }
    return 0;
}