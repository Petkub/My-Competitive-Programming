#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pll = pair<ll, ll>;
const char nl = '\n';

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<pll> cake;

    while (n--)
    {
        ll A;
        cin >> A;
        ll count = 1;
        while (A % 2 == 0)
        {
            A /= 2;
            count *= 2;
        }
    cake.emplace_back(A, count);
    }

    vll pref;
    pref.push_back(0);
    ll t = 0;
    for (int i = 0; i < cake.size(); i++)
    {
        t += cake[i].second;
        pref.push_back(t);
    }

    ll Q; cin >> Q;
    while (Q--)
    {
        ll x; cin >> x;
        auto it = lower_bound(pref.begin(), pref.end(), x);
        ll idx = it - pref.begin();
        cout << cake[idx - 1].first << nl;
    }
    // for (const auto &p: cake)
    // {
    //     cout << p.first << ", " << p.second << nl;
    // }

    // for (const ll &re: prefixSum)
    // {
    //     cout << re << nl;
    // }
    
    return (0);
}