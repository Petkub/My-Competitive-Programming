#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    ll N, K;cin>>N>>K;
    vector<string> name(N);
    for(string &n:name) cin>>n;
    cout<<name[K%N];
    return 0;
}