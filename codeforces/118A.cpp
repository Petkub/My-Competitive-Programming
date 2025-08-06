#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    string s;cin>>s;
    for(int i=0;i<s.length();i++)
    {
        char l = tolower(s[i]);
        if (not(l=='a' or l=='e' or l=='i' or l=='o' or l=='u' or l=='y'))
        {
            cout<<"."<<l;
        }
    }
    return 0;
}