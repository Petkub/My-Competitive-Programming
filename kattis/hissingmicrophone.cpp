#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    string s; cin>>s;
    // bool ok = false;
    // for(size_t i=0;i<s.length()-1;i++)
    // {
    //     if(s[i]=='s' and s[i+1]=='s')
    //     {
    //         ok=true;
    //         break;
    //     }
    // }
    // if(ok) cout<<"hiss";
    // else cout<<"no hiss";
    int idx = s.find("ss");
    if (idx != s.npos) cout<<"hiss";
    else cout<<"no hiss";
    return 0;
}