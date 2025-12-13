#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF=4e18;

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    vector<int> v(3, 0);
    for(int i=0;i<3;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int diff=v[1]-v[0];
    if(v[2]-v[1] > diff) cout<<v[1]+diff;
    else if (v[2]-v[1]==diff) cout<<v[2]+diff;
    else if (v[2]-v[1] < diff) cout<<(v[1]-(v[2]-v[1]));
    return 0;
}