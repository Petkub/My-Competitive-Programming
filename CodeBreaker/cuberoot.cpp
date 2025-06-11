#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    int N;
    cin>>N;
    while(N--)
    {
        ll n;
        cin>>n;
        ll l=0;
        ll h=1e6;
        while(l<=h)
        {
            ll m=l+(h-l)/2;
            ll cube=m*m*m;
            if(cube==n) {cout<<m<<'\n'; break;}
            else if(cube<n) {l=m+1;}
            else if(cube>n) {h=m-1;}
        }
    }
    return 0;
}