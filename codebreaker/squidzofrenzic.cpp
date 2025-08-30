#include<bits/stdc++.h>
using namespace std;
#define int long long
int N,M;
vector<int> arr;

bool can(int x)
{
    int n_sq=1;
    int t=0;
    for(int i=0;i<N;i++)
    {
        if(t+arr[i]>x)
        {
            n_sq++;
            t=0;
        }
        t+=arr[i];
    }
    if(n_sq>M) return false;
    return true;
}

int32_t main()
{
    cin>>N>>M;
    arr.resize(N);
    for(int i=0;i<N;i++) cin>>arr[i];

    int l=1, h=1e9, ans=h;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(can(mid))
        {
            ans=mid;
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<ans<<'\n';
    return 0;
}

