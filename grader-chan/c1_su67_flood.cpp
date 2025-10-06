#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);
    string x;
    cin>>x;
    int arr[200];
    memset(arr, 0, sizeof(arr));
    for(int i=0;i<(int)x.length();i++)
    {
        arr[x[i]]=1;
    }
    for(int i=0;i<200;i++)
    {
        if(arr[i]==1) cout<<(char)i<< " ";
    }
    return 0;
}