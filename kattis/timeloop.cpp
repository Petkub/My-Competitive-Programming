#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(int i)
{
    if(i==0)return;
    solve(i-1);
    cout<<i<<" Abracadabra"<<'\n';
}

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n;cin>>n;
    solve(n);
    return 0;
}