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
    int N;
    cin >> N;
    vi arr(N);
    for(int &v:arr) cin>>v;
    int c_mn = arr[0];
    int t_mn = arr[0];
    for (int i=1;i<N;i++)
    {
        c_mn = min(arr[i], c_mn+arr[i]);
        t_mn = min(t_mn, c_mn);
    }
    cout<<t_mn;
    return 0;
}