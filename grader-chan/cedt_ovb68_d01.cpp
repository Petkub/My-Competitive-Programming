#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MAX_N = 10005;
int arr[MAX_N];

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n; cin>>n;
    double tot=0;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
        tot+=arr[i];
    }
    double mean = tot/n;
    double diff = abs(arr[0] - mean);
    int ans;
    for(int i=1;i<n;i++)
    {
        double cur_diff = abs((arr[i]-mean));
        if (cur_diff > diff)
        {
            ans=arr[i];
            diff=cur_diff;
        }
    }
    cout<<ans;

    return 0;
}