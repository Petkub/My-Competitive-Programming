#include<bits/stdc++.h>
using namespace std;
#define int long long

typedef struct Data
{
    string v;
    int order;

    bool operator < (const Data &other)
    {
        return v < other.v;
    }
}Data;

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);
    int n; cin>>n;
    vector<Data> arr(n);
    for(int i=0;i<n;i++)
    {
        string s; cin>>s;
        arr[i]={s,i};
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-1;i++)
    {
        if(abs(arr[i+1].order-arr[i].order) != 1)
        {
            cout<<"NEITHER";
            return 0;
        }
    }
    cout<<(arr[1].order-arr[0].order==-1? "DECREASING":"INCREASING");
    return 0;
}