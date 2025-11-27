#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n,i=1;
    vector<int> arr;
    while(cin>>n)
    {
        arr.push_back(n);
        sort(arr.begin(),arr.end());
        if(i&1) cout<<arr[i/2];
        else cout<<(arr[i/2]+arr[i/2-1])/2;
        cout<<'\n';
        i++;
    }
    return 0;
}