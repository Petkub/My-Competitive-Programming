#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    int A, N;
    cin>>A>>N;
    vll arr(A), pf(A+1,0LL);
    for(ll &v: arr) cin>>v;
    for(int i=1;i<=A;i++)
    {
        pf[i] = arr[i-1] + pf[i-1];
    }
    while(N--)
    {
        int l,r;
        cin>>l>>r;
        cout<<pf[r]-pf[l-1]<<'\n';
    }
    return 0;
}