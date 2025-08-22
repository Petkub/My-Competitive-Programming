#include<bits/stdc++.h>
using namespace std;
#define int long long
int N,M;
vector<int> c;

bool ok(int mid)
{
    int cn=0;
    for(int i=0;i<M;i++)
    {
        cn+=ceil((double)c[i]/mid);
        if(cn>N) return false;
    }
    return cn<=N;
}

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    cin>>N>>M;
    c.resize(M);
    for(int &e:c) cin>>e;
    int l=1;
    int h=1e9;
    int ans=h;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(ok(mid))
        {
            ans=mid;
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<ans;
    return 0;
}