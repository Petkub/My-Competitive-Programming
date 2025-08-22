#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int N,Q;cin>>N>>Q;
    set<int> sleep;
    for(int i=1;i<=Q;i++)
    {
        string s;cin>>s;
        if(s=="SLEEP")
        {
            int x;cin>>x;
            sleep.insert(x);
        }
        else if(s=="WAKE")
        {
            int x;cin>>x;
            sleep.erase(x);
        }
        else
        {
            int x,y;cin>>x>>y;
            auto lb=sleep.lower_bound(x);
            if(lb!=sleep.end() and *lb<=y)
            {
                cout<<"NO";
            }
            else cout<<"YES";
            cout<<'\n';
        }
    }
    return 0;
}