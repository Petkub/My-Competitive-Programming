#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    int n;cin>>n;
    while(n--)
    {
        int x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
        int dx=llabs(x1-x2);
        int dy=llabs(y1-y2);
        int ans=dx+dy+(dy>0 and dx>0? 2:0);
        cout<<ans<<'\n';
    }
    return 0;
}