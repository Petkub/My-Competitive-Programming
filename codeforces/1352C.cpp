#include<bits/stdc++.h>
using namespace std;
#define int long long

int n,k;
bool check(int x)
{
    int cnt=x-(x/n);
    if(cnt>=k) return true;
    return false;
}

/* Version A */
int32_t main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int l=1,h=2e9,ans=h;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(check(mid))
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
    }
    return 0;
}
/* Version B */
// int32_t main()
// {
//     int t; cin>>t;
//     while (t--)
//     {
//         cin>>n>>k;
//         int ans = k+(k-1)/(n-1);
//         cout<<ans<<'\n'; 
//     }
//     return 0;
// }