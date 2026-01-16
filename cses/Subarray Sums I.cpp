#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n,x; cin>>n>>x;
    vector<int> pf(n+1, 0);
    for(int i=1;i<=n;i++)
    {
        int a; cin>>a;
        pf[i] = a + pf[i-1];
    }
    int l=0,r=1,cnt=0;
    while(r<=n)
    {
        int cur=pf[r]-pf[l];
        if (cur > x) l++;
        else if (cur < x) r++;
        else
        {
            cnt++;
            r++;
        }
    }
    cout<<cnt;
    return 0;
}