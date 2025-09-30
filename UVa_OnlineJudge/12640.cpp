#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF = 9e18;

int32_t main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    string data;
    while(getline(cin, data))
    {
        stringstream ss(data);
        string temp;
        vector<int> arr;
        while(ss >> temp)
        {
            arr.push_back(stoi(temp));
        }
        vector<int> dp(arr.size(),-INF);
        dp[0]=arr[0];
        int mx=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            dp[i]=max(arr[i],dp[i-1]+arr[i]);
            mx=max(mx,dp[i]); 
        }
        cout<<(mx>=0? mx:0)<<'\n';
    }
    return 0;
}