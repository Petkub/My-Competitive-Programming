#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        if(llabs(x)&1)cout<<x<<" is odd\n";
        else cout<<x<<" is even\n";
    }
    return 0;
}