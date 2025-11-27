#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int N;cin>>N;
    string s;cin>>s;
    vector<int>arr(N),dp(N);
    for(int i=0;i<N;i++)
    {
        if(s[i]!='M')arr[i]=s[i]-'0';
        else arr[i]=-2LL;
    }
    dp[0]=arr[0];
    int mx=arr[0];
    for(int i=1;i<N;i++)
    {
        dp[i]=max(arr[i],arr[i]+dp[i-1]);
        mx=max(mx,dp[i]);
    }
    if(mx<0)cout<<0;
    else cout<<mx;
    return 0;
}