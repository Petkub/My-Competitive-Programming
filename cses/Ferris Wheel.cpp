#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n, x; cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    int cnt=0,l=0,r=n-1;
    while (l<=r)
    {
        if (l==r)
        {
            cnt++;
            break;
        }
        if(v[l]+v[r] <= x)
        {
            l++; r--;
            cnt++;
        }
        else
        {
            r--;
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}