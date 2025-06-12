#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);ios::sync_with_stdio(false);
    int N;cin>>N;
    while(N--)
    {
        string s;cin>>s;
        if(s.length()>10)
        {
            int sz=s.length();
            cout<<s[0]<<sz-2<<s[sz-1]<<'\n';
        }
        else cout<<s<<'\n';
    }
    return 0;
}