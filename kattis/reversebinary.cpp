#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int solve(int n, int b)
{
    if(n==0)
    {
        return b;
    }
    int res= (2*b)+n%2;
    return solve(n/2,res);
}

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n;cin>>n;
    cout<<solve(n,0);
    return 0;
}