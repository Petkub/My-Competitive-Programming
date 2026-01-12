#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF = 4e18;
/* subtask 3-4 :))) */
int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int c,p; cin>>c>>p;
    vector<pair<int,int>> con(c); //{m, s}
    for(int i=0;i<c;i++)
    {
        cin>>con[i].first;
        cin>>con[i].second;
    }
    sort(con.begin(),con.end());

    vector<int> pfx(c);
    pfx[0]=con[0].second;
    for(int i=1;i<c;i++)
    {
        pfx[i]=max(pfx[i-1], con[i].second);
    }

    int tot=0;
    while(p--)
    {
        int q, d; cin>>q>>d;
        int idx = upper_bound(con.begin(), con.end(), make_pair(q, INF))-con.begin()-1;
        if(idx >= 0)
        {
            if(pfx[idx]-d > 0) tot+=pfx[idx] - d;
        }
    }
    cout<<tot;
    return 0;
}