#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    string s1,s2;
    cin>>s1>>s2;
    bool found=false;
    for(int i=0;i<(int)s1.length();i++)
    {
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
        if(s1[i]>s2[i])
        {
            cout<<1;
            found=true;
            break;
        }
        else if(s1[i]<s2[i])
        {
            cout<<-1;
            found=true;
            break;
        }
    }
    if(!found) cout<<0;
    return 0;
}