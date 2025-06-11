#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    int N,K;cin>>N>>K;
    vector<int> arr(N);
    for(int &e:arr) cin>>e;
    sort(arr.rbegin(),arr.rend());
    cout<<arr[K-1];
    return 0;
}