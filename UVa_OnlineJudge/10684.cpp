#include<bits/stdc++.h>
using namespace std;
#define int long long 
const int INF = 9e18;

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);
    int n;
    while(cin>>n and n!=0)
    {
        vector<int> arr(n);
        vector<int> dp(n, -INF);
        for(int i=0;i<n;i++) cin>>arr[i];
        dp[0]=arr[0];
        int mx=arr[0];
        for(int i=1;i<n;i++)
        {
            int cur=arr[i];
            dp[i]=max(cur,cur+dp[i-1]);
            mx=max(mx,dp[i]);
        }
        if(mx>0)
        {
            cout<<"The maximum winning streak is "<<mx<<".";
        }
        else
        {
            cout<<"Losing streak.";
        }
        cout<<'\n';
    }
    return 0;
}