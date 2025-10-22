#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    string s1,s2;
    cin>>s1>>s2;
    vector<int> dp(max(s1.length(), s2.length()));
    if(s1.length()<s2.length()) swap(s1,s2);
    for(int i=0;i<(int)s1.length();i++)
    {
        dp[i]=0;
        for(int j=0;j<(int)s2.length();j++)
        {
            if(s1[i]==s2[j])
            {
                dp[i]=1;
                if(s1[i-1]==s2[j-1]) dp[i]+=dp[i-1];
            }
        }
    }
    cout<<*max_element(dp.begin(), dp.end());
    return 0;
}