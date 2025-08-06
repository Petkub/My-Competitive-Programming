#include<bits/stdc++.h>
using namespace std;
#define int long long
int t;
int check(int x)
{
    return x*x*x;
}

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int N;cin>>N;
    while(N--)
    {
        cin>>t;
        int l=1,h=1e6,ans=h;
        while(l<=h)
        {
            int mid=(l+h)/2;
            int cube=check(mid);
            if(cube==t)
            {
                ans=mid;
                break;
            }
            else if(cube<t)
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}