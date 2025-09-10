#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int N;cin>>N;
    map<int, int> mp;
    while(N--)
    {
        int cmd,x;
        cin>>cmd>>x;
        if(cmd==1)
        {
            mp[x]++;
        }
        else if(cmd==2)
        {
            mp[x]--;
            if(mp[x]==0) mp.erase(x);
        }
        else if(cmd==3)
        {
            auto lb = mp.lower_bound(x);
            if (lb != mp.end()) cout<<lb->first;
            else cout<<-1;
            cout<<'\n';
        }
    }
    return 0;
}