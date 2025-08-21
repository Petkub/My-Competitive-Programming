#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int N;cin>>N;
    string s;cin>>s;
    map<char,int> mp;
    for(char ch='a';ch<='z';ch++) mp[ch]=0;
    for(int i=0;i<N;i++)
    {
        mp[s[i]]++;
    }
    for(auto [k,v]: mp)
    {
        cout<<k<<" "<<v<<'\n';
    }
    return 0;
}