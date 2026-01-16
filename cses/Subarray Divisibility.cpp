#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);
    int n; cin>>n;
    vector<int> pf(n+1, 0), mod(n,0);
    for(int i=1;i<=n;i++)
    {
        int x; cin>>x;
        pf[i]=x+pf[i-1];
    }
    mod[0]=1;
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        int r=(pf[i]%n+n)%n;
        cnt+=mod[r];
        mod[r]++;
    }
    cout<<cnt;
    return 0;
}