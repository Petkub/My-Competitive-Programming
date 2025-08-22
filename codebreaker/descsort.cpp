#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    int N;
    cin>>N;
    vector<ll> arr(N);
    for(ll &v:arr) cin>>v;
    sort(arr.rbegin(),arr.rend());
    for(ll &v:arr) cout<<v<<" ";
    return 0;
}