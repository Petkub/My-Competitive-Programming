#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int const MAXN=150000;

int main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    int n;cin>>n;
    vector<ll> prime;
    prime.push_back(2);
    for(ll i=3;i<=MAXN;i++)
    {
        bool isPrime=true;
        for(ll j=2;j<=sqrt(i);j++)
        {
            if(i%j==0){isPrime=false;break;}
        }
        if(isPrime)
        {
            prime.push_back(i);
        }
    }
    cout<<prime[n-1];
    return 0;
}