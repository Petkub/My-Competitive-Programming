#include<bits/stdc++.h>
using namespace std;
#define int long long

int solve(int n)
{
    if(n==0 or n==1) return 1;
    return n*solve(n-1) % 10;
}

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int N;cin>>N;
    while(N--)
    {
        int n;cin>>n;
        cout<<solve(n)<<'\n';
    }
    return 0;
}