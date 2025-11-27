#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    if (n<=2) cout<<"NO";
    else
    {
        if(a>=1 and b>=1 and c>=1)
        {
            if(a+b+c<n) cout<<"NO";
            else cout<<"YES";
        }
        else cout<<"NO";
    }
    return 0;
}