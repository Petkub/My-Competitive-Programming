#include<bits/stdc++.h>
using namespace std;

int solve(string s)
{
    if(s.length()==1) return 0;
    int sum=0;
    for(auto c: s)
    {
        sum+=c-'0';
    }
    return 1 + solve(to_string(sum));
}

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    string n;cin>>n;
    cout<<solve(n);
    return 0;
}