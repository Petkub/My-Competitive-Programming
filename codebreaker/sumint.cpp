#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    int N,sum=0;cin>>N;
    while(N--)
    {
        int n;cin>>n;
        sum+=n;
    }
    cout<<sum;
    return 0;
}