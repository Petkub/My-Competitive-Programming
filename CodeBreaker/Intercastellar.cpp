#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll,ll>;
using vll = vector<ll>;
using vpll = vector<pll>;

int main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    ll N;cin>>N;
    vpll cake(N);
    for(int i=0;i<N;i++)
    { 
        ll cnt=1;
        ll A;cin>>A;
        while(A%2==0)
        {
            cnt*=2;
            A/=2;
        }
        cake[i] = {A,cnt};
    }
    vll pf(N);
    pf[0]=cake[0].second;
    for(int i=1;i<N;i++)
    {
        pf[i]=cake[i-1].second+pf[i-1];
    }
    ll Q;cin>>Q;
    for(int i=1;i<=Q;i++)
    {
        ll x;cin>>x;
        ll idx = lower_bound(pf.begin(),pf.end(),x)-pf.begin();
        cout<<cake[idx].first<<'\n';
    }
    return 0;
}