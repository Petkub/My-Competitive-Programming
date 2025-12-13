#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);
    int n;
    while(cin>>n and n!=-1)
    {
        int tot=0,prev=0;
        for(int i=0;i<n;i++)
        {
            int s,t; cin>>s>>t;
            tot += s*(t-prev);
            prev=t;
        }
        cout<<tot<<" miles\n";
    }
    return 0;
}