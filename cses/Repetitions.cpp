#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    string s; cin>>s;
    vector<int> dp(s.length(),0);
    dp[0]=1;
    for(int i=1;i<(int)s.length();i++)
    {
        if(s[i]==s[i-1]) dp[i]=dp[i-1]+1;
        else dp[i]=1;
    }
    cout<<*max_element(dp.begin(),dp.end());
    return 0;
}