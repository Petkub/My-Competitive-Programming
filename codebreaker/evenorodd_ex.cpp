#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n; cin>>n;
    int odd=0,even=0;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        if(x&1) odd++;
        else even++;
    }
    cout<<odd<<" "<<even;
    return 0;
}