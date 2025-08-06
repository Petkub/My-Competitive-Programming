#include<bits/stdc++.h>
using namespace std;
#define int long long
int N, M;
vector<int> B;

bool ok(int mid)
{
    int s=0; int sq=1;
    for(int i=0;i<N;i++)
    {
        if(s+B[i]<=mid) {s+=B[i];}
        else
        {
            sq++;
            s=B[i];
        }
    }
    return sq<=M;
}

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    cin>>N>>M;
    B.resize(N);
    int t=0,mx=0;
    for(int &e:B)
    {
        cin>>e;
        t+=e;
        mx=max(mx,e);
    }
    int l=mx;
    int h=t;
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