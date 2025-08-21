#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int N,H;cin>>N>>H;
    vector<int> arr(N-1);
    for(int i=0;i<N-1;i++)
    {
        cin>>arr[i];
    }
    int l=H/N, m=l;
    int cnt=0;
    for(int i=0;i<N-1;i++)
    {
        if(arr[i]>=l) cnt++;
        l+=m;
    }
    if(cnt!=0)
    {
        cout<<"No\n";
        cout<<cnt;
    }
    else
    {
        cout<<"Yes";
    }
    return 0;
}