#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n; cin>>n;
    bool ok=true;
    for(int i=1;i<=n;i++)
    {
        string a; cin>>a;
        if(a=="mumble") continue;
        if(stoi(a)!=i)
        {
            ok=false;
            break;
        }
    }
    if(ok) cout<<"makes sense";
    else cout<<"something is fishy";
    return 0;
}