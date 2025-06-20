#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    ll n,d;cin>>n>>d;
    ll re=n/d;
    if(re*d<n)re++;
    cout<<re;
    return 0;
}