#include<iostream>
#include<stack>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n; string s;cin>>s;
        int b=0,ans=0;
        for(int i=0;i<n;i++)
        {
            b+=(s[i]=='('?1:-1);
            if(b<0) {ans++;b=0;}
        }
        cout<<ans<<'\n';
    }
    return 0;
}