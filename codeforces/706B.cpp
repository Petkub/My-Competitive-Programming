#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(),x.end()

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int q;cin>>q;
    sort(all(arr));
    while(q--)
    {
        int m;cin>>m;
        auto ub=upper_bound(all(arr),m);
        cout<<ub-arr.begin()<<'\n';
    }
    return 0;
}
