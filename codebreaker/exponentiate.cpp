#include<bits/stdc++.h>
using namespace std;
#define int long long
int MOD;

int expo(int a, int p)
{
    if (p==0)return 1;
    int ans=expo(a, p/2);
    if(p%2==0) return (ans*ans)%MOD;
    else return (a*ans*ans)%MOD;
    
}

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int T;cin>>T;
    while(T--)
    {
        int A,B;cin>>A>>B>>MOD;
        cout<<expo(A,B)<<'\n';
    }
    return 0;
}