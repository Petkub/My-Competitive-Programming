#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n; cin>>n;
    cin>>ws;
    string str;
    getline(cin, str);
    for(int i=0;i<(int)str.length();i++)
    {
        if(str[i]>='A' and str[i] <='Z')
        {
            if(str[i] - n < 'A')
            {
                str[i] = (char)('Z' + (str[i] - 'A' + 1) - n);
            }
            else
            {
                str[i] = (char)(str[i] - n);
            }
        }
        else if(str[i]>='a' and str[i]<='z')
        {
            if(str[i] - n < 'a')
            {
                str[i] = (char)('z' + (str[i] - 'a' + 1) - n);
            }
            else
            {
                str[i] = (char)(str[i] - n);
            }
        }
        cout<<str[i];
    }
    return 0;
}