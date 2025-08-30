#include<bits/stdc++.h>
using namespace std;
#define int long long

bool is_prime(int n)
{
    if(n==1) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for (int i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n;cin>>n;
    cout<<(is_prime(n)? "Prime":"Not Prime");
    return 0;
}