#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n; cin>>n;
    while(n--)
    {
        int g; cin>>g;
        vector<int> v(g);
        int pos=0;
        cin>>v[0];
        for(int i=1;i<g;i++)
        {
            cin>>v[i];
            if(v[i]-v[i-1]!=1 and pos==0)
            {
                pos=i+1;
            }
        }
        cout<<pos<<'\n';
    }
    return 0;
}