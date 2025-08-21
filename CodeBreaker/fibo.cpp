#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> fibo;
const int MOD=998244353;

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n;cin>>n;
    fibo.assign(n+1, 0);
    fibo[0]=0,fibo[1]=1;
    for(int i=2;i<=n;i++)
    {
        fibo[i]=(fibo[i-1]%MOD+fibo[i-2]%MOD)%MOD;
    }
    for(int i=0;i<=n;i++)
    {
        cout<<fibo[i]<<'\n';
    }
    return 0;
}