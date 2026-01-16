#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n,x,cnt=0;cin>>n>>x;
    map<int,int> mp;
    vector<int> pf(n+1, 0);
    for(int i=1;i<=n;i++)
    {
        int a; cin>>a;
        pf[i] = a + pf[i-1];
    }
    mp[0]=1;
    for(int i=1;i<=n;i++)
    {
        if(mp.count(pf[i]-x))
        {
            cnt+=mp[pf[i]-x];
        }
        mp[pf[i]]++;
    }
    cout<<cnt;
    return 0;
}