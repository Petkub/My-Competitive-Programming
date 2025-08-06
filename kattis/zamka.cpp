#include<bits/stdc++.h>
using namespace std;
#define int long long

int sum_digit(int n)
{
    if(n<10) return n;
    return n%10+sum_digit(n/10);
}

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int L,D,X; cin>>L>>D>>X;
    for(int i=L;i<=D;i++)
    {
        if(sum_digit(i)==X)
        {
            cout<<i<<'\n';
            break;
        }
    }
    for(int i=D;i>=L;i--)
    {
        if(sum_digit(i)==X)
        {
            cout<<i<<'\n';
            break;
        }
    }
    return 0;
}