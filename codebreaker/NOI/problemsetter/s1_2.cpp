#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF = 4e18;
/*
    subtask 1-2 :)))
*/
int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int c,p; cin>>c>>p;
    vector<pair<int,int>> cont(c+1);
    for(int i=1;i<=c;i++)
    {
        cin>>cont[i].second;
        cin>>cont[i].first;
    }
    int tot = 0;
    while(p--)
    {
        int q,d; cin>>q>>d;
        int mx = -INF;
        for(int i=1;i<=c;i++)
        {
            auto [s, m] = cont[i];
            if(q >= m)
            {
                if(s-d > 0 and s-d > mx) mx = s-d;
            }
        }
        if(mx==-INF) tot+=0;
        else tot+=mx;
    }
    cout<<tot;
    return 0;
}