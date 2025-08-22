#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;

ll fact(int n)
{
    if(n==0||n==1) return 1;
    return (n*fact(n-1%MOD))%MOD;
}

int main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    int n;cin>>n;
    // ll fact = n;
    // while(n--&&n!=1)
    // {
    //     fact = (fact*(n%MOD))%MOD;
    // }
    // cout<<fact;
    cout<<fact(n);
    return 0;
}