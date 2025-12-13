#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n; cin>>n;
    int tot=0;
    for(int i=0;i<n;i++)
    {
        int k; cin>>k;
        if(k<0) tot+=k;
    }
    cout<<abs(tot);
    return 0;
}