#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF=4e18;

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n;cin>>n;
    vector<int> arr;
    while(cin>>n)
    {
        if(n!=-999999) arr.push_back(n);
        else
        {
            int n=arr.size();
            int mx=-INF;
            int mul=1;
            for (int i=0;i<n;i++)
            {
                mul *= arr[i];
                if (mul < 0)
                { 
                    mx = max(-mx, mul);
                }
            }
            cout<<mx<<'\n';
        }
    }
    return 0;
}