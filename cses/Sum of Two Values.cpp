#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n,x; cin>>n>>x;
    vector<pair<int,int>> v(n+1);
    for(int i=1;i<=n;i++)
    {
        int x; cin>>x;
        v[i] = {x,i};
    }
    sort(v.begin(),v.end());
    int l=1,r=n;
    while(l<r)
    {
        int tot=v[l].first+v[r].first;
        if(tot==x)
        {
            cout<<v[l].second<<" "<<v[r].second;
            return 0;
        }
        if(tot > x) r--;
        else l++;
    }
    cout<<"IMPOSSIBLE";
    return 0;
}