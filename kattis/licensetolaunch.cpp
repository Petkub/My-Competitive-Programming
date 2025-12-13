#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF = 4e18;
int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n; cin>>n;
    int mn=INF,idx=-1;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        if(x==0) {cout<<i; return 0;}
        if(x<mn)
        {
            mn=x;
            idx=i;
        }
    }
    cout<<idx;
    return 0;
}