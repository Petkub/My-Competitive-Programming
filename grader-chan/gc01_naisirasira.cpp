#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n;cin>>n;
    vector<int> arr(n);
    int mx=-1,mn=-1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr[i]*=2;
        mx=max(mx,arr[i]);
        mn=min(mn,arr[i]);
    }
    for(int i=0;i<mx;i++)
    {
        for(int j=0;j<(int)arr.size();j++)
        {
            if(arr[j] == mx or i >= mx-arr[j])
            {
                cout<<"####";
            }
            else
            {
                cout<<"    ";
            }

            cout<<"  ";
        }
        cout<<'\n';
    }

    return 0;
}