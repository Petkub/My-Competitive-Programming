#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n;cin>>n;
    vector<int> arr(n);
    int even=0,odd=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]&1) odd++;
        else even++;
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]&1)
        {
            cnt+=even;
            odd--;
        }
        else
        {
            cnt+=odd;
            even--;
        }
    }
    cout<<cnt;
    return 0;
}