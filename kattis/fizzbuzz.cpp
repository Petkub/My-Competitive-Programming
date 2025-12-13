#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);
    int x,y,n; cin>>x>>y>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%x==0 and i%y==0) cout<<"FizzBuzz";
        else if(i%x==0) cout<<"Fizz";
        else if(i%y==0) cout<<"Buzz";
        else cout<<i;
        cout<<'\n';
    }
    return 0;
}