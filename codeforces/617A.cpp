#include<bits/stdc++.h>
using namespace std;

int solve(int n)
{
    if(n<=0) return 0;
    if(n<5) return 1;
    return 1 + solve(n-5);
}

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n;cin>>n;
    cout<<solve(n);
    return 0;
}