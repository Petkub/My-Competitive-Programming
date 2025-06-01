#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
const char nl = '\n';

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    vll pts(n + 1, 0LL), cts(n + 1, 0LL);
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        pts[i] = pts[i - 1] + (a > 0 ? a : 0);
        cts[i] = cts[i - 1] + abs(a < 0 ? a : 0);
    }

    while (m--)
    {
        ll x, h;
        cin >> x >> h;

        ll lb = cts[x] + h;
        auto it = lower_bound(cts.begin() + x, cts.end(), lb);
        int idx = (it != cts.end() ? it - cts.begin() - 1 : n);

        if (idx < x)
        {
            cout << 0 << nl;
        }
        else
        {
            cout << pts[idx] - pts[x] << nl;
        }
    }
    return (0);
}