#include<bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
const ull MOD = 1e9+9;
int main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    ull A,B,C,D,E;cin>>A>>B>>C>>D>>E;
    ull ans = 1;
    ans = (ans*(A%MOD))%MOD;
    ans = (ans*(B%MOD))%MOD;
    ans = (ans*(C%MOD))%MOD;
    ans = (ans*(D%MOD))%MOD;
    ans = (ans*(E%MOD))%MOD;
    cout<<ans;
    return 0;
}   