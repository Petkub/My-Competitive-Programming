#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int tc; cin>>tc;
    while(tc--)
    {
        string s; cin>>s;
        if(s[0]=='P')cout<<"skipped\n";
        else
        {
            int idx = s.find('+');
            cout<<stoi(s.substr(0,idx))+stoi(s.substr(idx+1))<<'\n';
        }
    }
    return 0;
}