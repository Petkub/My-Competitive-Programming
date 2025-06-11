#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll fibo(int n)
{
    if(n==1){return 0;}
    if(n==2){return 1;}
    return fibo(n-2)+fibo(n-1);
}

int main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    int n;cin>>n;
    cout<<fibo(n);
    return 0;
}