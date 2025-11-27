#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n;cin>>n;
    set<int> s;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        s.insert(a);
    }
    cout<<s.size();
    return 0;
}