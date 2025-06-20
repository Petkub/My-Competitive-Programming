#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ull=unsigned long long;

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    ull T,A,B,M;cin>>T;
    while(T--)
    {
        cin>>A>>B>>M;
        int ans=1;
        while(B--)
        {
            ans=((ans*A)%M)%M;
        }
        cout<<ans<<'\n';
    }

    return 0;
}