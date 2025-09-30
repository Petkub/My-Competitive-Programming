#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    string s1,s2; cin>>s1>>s2;
    char arr[200];
    memset(arr, -1, sizeof(arr));

    for(size_t i=0;i<s1.length();i++)
    {
        for(size_t j=0;j<s2.length();j++)
        {
            if(s1[i]==s2[j] and arr[(int)s1[i]]==-1)
            {
                cout<<s1[i]<<" ";
                arr[(int)s1[i]]++;
            }
        }
    }
    return 0;
}