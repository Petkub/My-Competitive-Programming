#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);
    int n; cin>>n;
    vector<int> arr(n);
    deque<int> pf1((n-1)/2),pf2((n+1)/2);
    for(int i=0;i<n;i++) cin>>arr[i];
    pf1[0]=arr[1];
    pf1[0]=arr[0];
    for (int i=0;i<n;i++)
    {
        
    }
    return 0;
}