#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n; cin>>n;
    while(n!=1)
    {
        cout<<n<<" ";
        if(n&1) n=n*3+1;
        else n/=2;
    }
    cout<<n;
    return 0;
}