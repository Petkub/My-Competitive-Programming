#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    ll T,A,B,C,D;
    cin>>T;
    while(T--)
    {
        cin>>A>>B>>C>>D;
        int l=1;
        int h=1e5;
        int ans=h;
        while(l<=h)
        {
            ll x=l+(h-l)/2;
            ll s=A*x*x*x+B*x*x+C*x;
            if(s>=D)
            {
                h=x-1;
                ans=x;
            }
            else {l=x+1;}
        }
        cout<<ans<<'\n';
    }
    return 0;
}