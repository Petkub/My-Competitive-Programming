#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);
    int tot=0,c=10;
    for(int i=1;i<=9;i++)
    {
        int n; cin>>n;
        tot+=n*c--;
    }
    for(int i=0;i<=10;i++)
    {
        if((tot+i)%11==0)
        {
            cout<<i<<'\n';break;
        }
    }
    return 0;
}