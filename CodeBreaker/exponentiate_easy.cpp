#include<bits/stdc++.h>
using namespace std;

int pow(int a, int b)
{
    if(b==1) return a;
    return a*pow(a,b-1);
}

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int N;cin>>N;
    while(N--)
    {
        int a,b;cin>>a>>b;
        cout<<pow(a,b)<<'\n';
    }
    return 0;
}