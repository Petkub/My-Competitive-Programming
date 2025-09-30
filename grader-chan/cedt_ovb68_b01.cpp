#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int t;cin>>t;
    if (t<160) cout<<"Undercooked";
    else if (t>=160 and t<=180) cout<<"Perfect";
    else cout<<"Burnt";
    return 0;
}