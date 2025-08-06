#include<bits/stdc++.h>
using namespace std;
#define int long long
int X,Y;

bool check(int k)
{
    return k*Y-k*X>=Y;
}
int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    while(cin>>X and cin>>Y)
    {
        int l=2,h=1e4,k=h;
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
        cout<<k<<'\n';
    }
    return 0;
}