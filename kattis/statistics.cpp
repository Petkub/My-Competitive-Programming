#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF=4e18;
int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n; int tc=1;
    while(cin>>n)
    {
        int mn=INF,mx=-INF;
        while(n--)
        {
            int x; cin>>x;
            if(x>mx) mx=x;
            if(x<mn) mn=x;
        }
        cout<<"Case "<<tc++<<": "<<mn<<" "<<mx<<" "<<mx-mn<<'\n';
    }
    return 0;
}