#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(),x.end()

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n,m,k; cin>>n>>m>>k;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    sort(all(a));
    sort(all(b));
    int cnt=0,i=0,j=0;
    while(i<n and j<m)
    {
        if(a[i]-k>b[j]) j++;
        else if(b[j] > a[i]+k) i++;
        else
        {
            i++;j++;
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}