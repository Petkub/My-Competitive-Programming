#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    bool is_sorted = true;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1] < arr[i])
        {
            is_sorted = false;
            break;
        }
    }
    cout<<(is_sorted? "sorted!":"un-sorted!");
    return 0;
}