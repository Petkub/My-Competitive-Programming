#include<bits/stdc++.h>
using namespace std;

int solve(int m)
{
    if(m<=0) return 0;
    if(m>=100) return 1 + solve(m-100);
    if(m>=20) return 1 + solve(m-20);
    if(m>=10) return 1 + solve(m-10);
    if(m>=5) return 1 + solve(m-5);
    return 1 + solve(m-1);
}

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n;cin>>n;
    cout<<solve(n);
    return 0;
}