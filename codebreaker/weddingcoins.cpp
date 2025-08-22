#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    ll N;cin>>N;
    ll total = 0;
    vector<ll> cent = {1000000, 500000, 100000, 50000, 10000, 5000, 1000, 500, 100, 50, 10, 5, 1};
    for(size_t i=0;i<cent.size();i++)
    {
        total+=(N/cent[i]);
        N %= cent[i];
    }
    cout<<total;
    return 0;
}