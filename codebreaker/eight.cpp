#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int N,cnt=0;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        int a; cin>>a;
        if(a==8) cnt++;
    }
    cout<<cnt;
    return 0;
}