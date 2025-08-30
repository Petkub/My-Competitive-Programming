#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n,a,b;cin>>n>>a>>b;
    for(int i=1;i<=n;i++)
    {
        if(i%a==0 and i%b==0) cout<<"FizzBuzz\n";
        else if(i%a==0) cout<<"Fizz\n";
        else if(i%b==0) cout<<"Buzz\n";
        else cout<<i<<'\n';
    }
    return 0;
}