#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    ll N;cin>>N;
    ll sum=0;
    while(N--)
    {
        ll w,h;cin>>w>>h;
        sum+=(w*h);
    }
    cout<<sum;
    return 0;
}