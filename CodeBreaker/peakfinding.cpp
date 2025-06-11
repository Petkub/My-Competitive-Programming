#include<bits/stdc++.h>
using namespace std;
const int INF = 2e9;

int main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    int N; cin >> N;
    int mx = -INF;
    while(N--)
    {
        int n;cin>>n;
        mx=max(mx,n);
    }
    cout<<mx;
    return 0;
}