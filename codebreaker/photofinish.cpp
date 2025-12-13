#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);
    int n; cin>>n;
    int cnt=0;
    bool isOk=true;
    int f2;
    cin>>f2;
    if(f2==1)
    {
        cout<<1;
        return 0;
    }
    for(int i=2;i<=n;i++)
    {
        int a; cin>>a;
        if(a < f2)
        {
            cnt++;
            isOk=false;
            f2=a;
        }
        if(a==1 and !isOk)
        {
            cnt++;
            break;
        }
    }
    cout<<cnt;
    return 0;
}