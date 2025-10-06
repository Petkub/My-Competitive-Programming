#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF = 9e18;

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n; cin>>n;
    vector<int> arr(n);
    int mx=-INF,mn=INF,tot=0;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
        mx=max(mx,arr[i]);
        mn=min(mn,arr[i]);
        tot+=arr[i];
    }
    cout<<mx-mn<<" "<<fixed<<setprecision(2)<<(double)tot/n;
    return 0;
}