#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);

    ll n;
    cin >> n;
    while (n--)
    {
        ll w;
        cin >> w;
        ll k = (sqrtl(1.0L + 8.0L * w) + -1.0L) / 2.0L;
        cout << k << '\n';
    }
    return (0);
}