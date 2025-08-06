#include<bits/stdc++.h>
using namespace std;
#define int long long

int solve(string s, int idx)
{
    string ns = to_string(s.length());
    if(ns==s)
    {
        return idx;
    }
    return solve(ns,idx+1);
}

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    string s;
    while(cin>>s and s!="END")
    {
        cout<<solve(s, 1)<<'\n';
    }
}

