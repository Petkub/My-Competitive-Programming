#include<bits/stdc++.h>
using namespace std;
#define int long long
int N,H;

void solve(int idx,int one, string s)
{
    if(idx>=N)
    {
        if(one==H) cout<<s<<'\n';
        return;
    }

    if(one < H)
    {
        solve(idx+1,one+1,s+"1");
    }
    if()
    {

    }
}

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int T;cin>>T;
    while(T--)
    {
        cout<<'\n';
        cin>>N>>H;
        solve(0, 0, "");
    }
    return 0;
}
