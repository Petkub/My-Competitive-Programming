#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF=9e18;

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int N,M;cin>>N>>M;
    vector<int> T(N+1),A(N);
    for(int i=0;i<N;i++)cin>>T[i];
    for(int i=0;i<N;i++)cin>>A[i];
    T[N]=INF;
    while(M--)
    {
        int Q;cin>>Q;
        auto ub=upper_bound(T.begin(),T.end(),Q);
        int idx = (ub-1)-T.begin();
        cout<<A[idx]<<'\n';
    }
    return 0;
}