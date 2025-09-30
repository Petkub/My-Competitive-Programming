#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n;cin>>n;
    int tot=0;
    for (int i=1;i<=n;i++)
    {
        int fact=1;
        for(int j=i;j>=2;j--)
        {
            fact *= j;
        }
        tot+=fact;
    }
    cout<<tot;
    return 0;
}