#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0), ios::sync_with_stdio(0);
    int x,y,z;
    cin>>x>>y>>z;
    switch (z)
    {
        case 1:
            cout<<x+y; break;
        case 2:
            cout<<x-y; break;
        case 3:
            cout<<x*y; break;
        case 4:
            cout<<(y!=0? to_string(x/y):"cannot divide by zero"); break;
        case 5:
            cout<<(y!=0? to_string(x%y):"cannot divide by zero"); break;
    }
    return 0;
}