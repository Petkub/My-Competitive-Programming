#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    string str;
    getline(cin, str);
    int g,a,s;
    cin>>g>>a>>s;
    if(g==1)
    {
        if(a<15) cout<<"Master "<<str;
        else cout<<"Mr. "<<str;
    }
    else
    {
        if(a<15) cout<<"Miss "<<str;
        else
        {
            if(s==0) cout<<"Miss "<<str;
            else cout<<"Mrs. "<<str;
        }
    }
    return 0;
}