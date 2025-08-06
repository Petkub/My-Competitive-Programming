#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n;cin>>n;
    vector<int> arr(n),pf(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    pf[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        pf[i]=pf[i-1]+arr[i];
    }
    int m;cin>>m;
    while(m--)
    {
        int q;cin>>q;
        int idx=lower_bound(pf.begin(),pf.end(),q)-pf.begin()+1;
        cout<<idx<<'\n';
    }
    return 0;
}