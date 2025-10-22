#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int a,b,c;cin>>a>>b>>c;
    int tot=a+b+c;
    if(a==0 or b==0 or c==0 or tot<=60) cout<<"FAIL";
    else if(tot<=74) cout<<"PASS";
    else if(tot<=84) cout<<"SILVER";
    else cout<<"GOLD";
    return 0;
}