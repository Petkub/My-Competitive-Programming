#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);
    int l,r; cin>>l>>r;
    if (l==0 and r==0) cout<<"Not a moose";
    else if(l==r) cout<<"Even "<<l+r;
    else if(l!=r) cout<<"Odd "<<max(l,r)*2;
    return 0;
}