#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
#define all(x) x.begin(),x.end()
const int INF = 2e9+5;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    int N, K;
    cin >> N >> K;
    vi W(N);
    for (int &v:W) cin >> v;
    if (K >= N) {cout<<0; return 0;}
    int L = N-K;

    int mn = INF;
    for (int i=0;i<=K;i++)
    {
        int f = W[i];
        int l = W[L-1+i];
        mn = min(mn, l-f);
    }
    cout<<mn;
    return 0;
}