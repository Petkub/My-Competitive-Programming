#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF = 9e18;
int32_t main()
{
    int n;cin>>n;
    vector<int> arr(n);
    int mx=-INF;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mx=max(mx,arr[i]);
    }
    for(int i=0;i<mx;i++)
    {
        for(int j=0;j<n;j++)
        {
            int mx_w = (arr[j]-i)*2;
            if(mx_w > 0)
            {
                for(int k=0;k<arr[j]*2;k++)
                {
                        if(k==i)cout<<"\\";
                        else if(k==arr[j]*2-i-1) cout<<"/";
                        else cout<<" ";
                }
            }
            else
            {
                for(int k=0;k<arr[j]*2;k++) cout<<" ";
            }
        }
        cout<<'\n';
    }
    return 0;
}