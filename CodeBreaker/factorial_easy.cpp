#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;

int main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    int n;cin>>n;
    ll fact = n;
    while(n--&&n!=1)
    {
        fact = (fact*(n%MOD))%MOD;
    }
    cout<<fact;
    return 0;
}