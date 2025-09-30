#include<bits/stdc++.h>
using namespace std;
#define int long long

// int32_t main()
// {
//     cin.tie(0);ios::sync_with_stdio(0);
//     string s;cin>>s;
//     set<char> st = set(s.begin(),s.end());
//     for(auto &ch: st) cout<<ch<<" ";
//     return 0;
// }

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    string s; cin>>s;
    int arr[200];
    memset(arr,-1,sizeof(arr));
    for(size_t i=0;i<s.length();i++)
    {
        arr[(int)s[i]]++;
    }
    for(int i=0;i<200;i++)
    {
        if(arr[i]!=-1)
        {
            cout<<(char)i<<" ";
        }
    }
    return 0;
}