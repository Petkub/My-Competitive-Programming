#include<bits/stdc++.h>
using namespace std;
#define int long long

string solve(string s, int idx, string res)
{
    if(idx >= (int)s.length()) return res+s[0];
    if(s[idx]=='-')
    {
        res += s[0];
        return solve(s.substr(idx+1),0,res);
    }
    return solve(s,idx+1,res);
}

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    string s;cin>>s;
    cout<<solve(s, 0, "");
    return 0;
}