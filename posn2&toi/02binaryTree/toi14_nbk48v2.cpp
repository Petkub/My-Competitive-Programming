#include <bits/stdc++.h>
using namespace std;
using ii = pair<int, int>;
using vii = vector<ii>;
#define all(x) x.begin(), x.end()
const char nl = '\n';

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int N, Q;
    cin >> N >> Q;

    vii pf(N + 1);
    pf[0] = {0, 0};
    for (size_t i = 1; i <= N; i++)
    {
        int p;
        cin >> p;
        pf[i].first = p + pf[i - 1].first;
        pf[i].second = i;
    }
    sort(all(pf));

    for (size_t i = 1; i <= N; i++)
    {
        pf[i].second = max(pf[i].second, pf[i - 1].second);
    }

    while (Q--)
    {
        int q;
        cin >> q;
        auto it = upper_bound(all(pf), make_pair(q, INT_MAX));
        int idx = it - pf.begin() - 1;
        cout << pf[idx].second << nl;
    }
    return (0);
}