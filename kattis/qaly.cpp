#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

int32_t main()
{
    int n; cin>>n;
    ld tot=0.0L;
    for(int i=0;i<n;i++)
    {
        ld q,p; cin>>q>>p;
        tot+=q*p;
    }
    cout<<fixed<<setprecision(3)<<tot;
    return 0;
}