#include<bits/stdc++.h>
using namespace std;
#define int long long

bool check(int k, int d, int m)
{
    int cnt=0;
    int de=d;
    int t=k;
    while (k / de > 0)
    {
        t+=k/de;
        cnt++;
        de *= (d + cnt);
        // cout<<t<<'\n';
    }
    if(t>=m) return true;
    return false;
}

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int m,d; cin>>m>>d;
    int l=1,h=1e15,ans=h;
    while(l<=h)
    {
        int mid=(l+h)/2;
        // cout<<"-------\n";
        if(check(mid, d, m))
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