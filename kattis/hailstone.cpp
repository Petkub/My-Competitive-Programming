#include<bits/stdc++.h>
using namespace std;
#define int long long

int solve(int n, int res)
{
    if(n==1) return res;
    if(n%2==0)
    {
        int h=n/2;
        res += h;
        return solve(h,res);
    }
    int h=3*n+1;
    res += h;
    return solve(h,res);
}

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int N;cin>>N;
    cout<<solve(N,N);
    return 0;
}