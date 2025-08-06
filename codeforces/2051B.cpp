#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int T;cin>>T;
    while(T--)
    {
        vector<ll> arr(3);
        int n;cin>>n;
        for(ll &v: arr) cin>>v;
        ll sum=0;
        ll d=0;
        while(sum<n)
        {
            sum+=arr[d++%3];
        }
        cout<<d<<'\n';
    }
    return 0;
}