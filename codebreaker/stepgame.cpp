#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    int n; cin>>n;
    vector<int> arr(n);
    for(int &e: arr) cin>>e;
    int mn,tot;
    mn=tot=arr[0];
    for(int i=1;i<n;i++)
    {
        tot += arr[i];
        mn=min(mn, tot);
        if (tot > 0) tot = 0;
    }
    cout<<mn;
    return 0;
}