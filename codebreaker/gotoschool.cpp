#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MAX_N=1e5+5;

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int N;cin>>N;
    vector<int> arr(MAX_N);
    for(int i=1;i<=N;i++)
    {
        int a;cin>>a;
        arr[a]=i;
    }
    for(int i=1;i<=N;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}