#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n,x,cnt=0;cin>>n>>x;
    map<int,int> mp;
    mp[0]=1;
    int pfx=0,a=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        pfx+=a;
        if(mp.count(pfx-x))
        {
            cnt+=mp[pfx-x];
        }
        mp[pfx]++;
    }
    cout<<cnt;
    return 0;
}