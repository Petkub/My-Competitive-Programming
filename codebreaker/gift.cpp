#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int &e:v) cin>>e;
    int total=0;
    for(int i=1;i<n;i++)
    {
        total += (v[i-1]-v[i]>=k);
    }
    cout<<total;
    return 0;
}