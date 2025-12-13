#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);
    int n; cin>>n;
    vector<int> arr(n+1);
    arr[1]=1;
    for(int i=2;i<=n;i++)
    {
        int d; cin>>d;
        arr[d+2]=i;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}