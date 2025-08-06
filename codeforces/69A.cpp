#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n;cin>>n;
    int sx=0,sy=0,sz=0;
    while (n--)
    {
        int x,y,z;cin>>x>>y>>z;
        sx+=x,sy+=y,sz+=z;
    }
    if(sx==0 and sy==0 and sz==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}