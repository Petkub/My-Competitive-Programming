#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n;cin>>n;
    unordered_map<string, int> um;
    for(int i=0;i<n;i++)
    {
        string x;
        int y;
        cin>>x>>y;
        um[x]=y;
    }
    int q;cin>>q;
    int tot=0;
    for(int i=0;i<q;i++)
    {
        string x;
        cin>>x;
        tot+=um[x];
    }
    cout<<tot/q;
    return 0;
}