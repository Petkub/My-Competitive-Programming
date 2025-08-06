#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(),x.end()
int n;
vector<int> r;

bool check(int k)
{
    int d=0;
    for(int i=0;i<n;i++)
    {
        int j=r[i]-d;
        if(j>k) return false;
        if(j==k) k--;
        d=r[i];
    }
    return true;
}

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int T;cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>n;
        r.clear(),r.resize(n);
        for(int i=0;i<n;i++)
        {
            cin>>r[i];
        }
        int l=1, h=1e7, k=h;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(check(mid))
            {
                k=mid;
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        cout<<"Case "<<i<<": "<<k<<'\n';
    }
    return 0;
}