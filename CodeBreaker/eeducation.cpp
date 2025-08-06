#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int N,M;cin>>N>>M;
    vector<int> A(N);
    unordered_map<int,int> B;
    B.reserve(M+5);
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<M;i++)
    {
        int k;cin>>k;
        B[k]++;
    }
    for(int i=N-1;i>=0;i--)
    {
        if(B.count(A[i]))
        {
            cout<<A[i]<<' ';
        }
    }
    return 0;
}