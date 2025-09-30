#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n; cin>>n;
    vector<int> x(n), h(n), y((2*n-2)+1);
    for(int i=0;i<n;i++) cin>>x[i];
    for(int i=0;i<n;i++) cin>>h[i];
    for (int i=0;i<=(2*n-2);i++)
    {
        for(int k=0;k<n;k++)
        {
            if(i-k>=0 and i-k < n)
            {
                y[i]+=x[k]*h[i-k];
            }
        }
    }
    for(int i=0;i<=(2*n-2);i++)
    {
        cout<<y[i]<<" ";
    }
    return 0;
}