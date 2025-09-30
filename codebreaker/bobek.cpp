#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    int n,m; cin>>n>>m;
    vector<int> arr(n);
    for(auto &e: arr) cin>>e;
    sort(arr.begin(),arr.end());
    int cnt=1;
    int mx_sum = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum=0;
            mx_sum += arr[j];
            for(int k=i;k<=j;k++)
            {
                sum+=arr[k];
                if(sum>m) break;
            }
            cout<<sum<<'\n';
            if(sum<=m) cnt++;
        }
    }
    cout<<cnt;
    return 0;
}