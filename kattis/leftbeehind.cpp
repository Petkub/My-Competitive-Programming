#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int x,y;
    while((cin>>x>>y) and !(x==0 and y==0))
    {
        if(x+y==13) cout<<"Never speak again.";
        else if(x>y) cout<<"To the convention.";
        else if(x<y) cout<<"Left beehind.";
        else if(x==y) cout<<"Undecided.";
        cout<<'\n';
    }
}