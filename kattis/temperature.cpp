#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

int32_t main()
{
    int x,y; cin>>x>>y;
    if(x!=0 and y==1) cout<<"IMPOSSIBLE";
    else if(x==0 and y==1) cout<<"ALL GOOD";
    else
    {
        ld ans = (ld)x/(1-y);
        cout<<fixed<<setprecision(6)<<ans;
    }
    return 0;
}