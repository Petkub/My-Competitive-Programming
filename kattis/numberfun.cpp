#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n; cin>>n;
    while(n--)
    {
        int a,b,c; cin>>a>>b>>c;
        bool ok=false;
        if(a+b==c) ok=true;
        else if(a-b==c or b-a==c) ok=true;
        else if(a*b==c) ok=true;
        else if(a == b * c or b == a * c) ok=true;

        if(ok) cout<<"Possible\n";
        else cout<<"Impossible\n";
    }
    return 0;
}