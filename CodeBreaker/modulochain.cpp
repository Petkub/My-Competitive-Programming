#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int MOD = 1e9+7;

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int N;cin>>N;
    vector<ll> vec(N),pf(N);
    for(auto &e:vec) cin>>e;
    pf[0]=vec[0]%MOD;
    for(int i=1;i<N;i++)
    {
        pf[i]=(pf[i-1]+(vec[i]%MOD))%MOD;
    }
    ll ans1=pf[N-1];
    ll ans2=((vec[0]%MOD)*(vec.back()%MOD))%MOD;
    ll ans3=((pf[0]-((pf[N-1]-pf[0])%MOD))+MOD)%MOD;
    cout<<ans1<<" "<<ans2<<" "<<ans3;
    return 0;
}