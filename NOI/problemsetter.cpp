#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ii = pair<int, int>;
const char nl = '\n';

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);

    int c, p;
    cin >> c >> p;
    vector<ii> cont(c);
    for (int i = 0; i < c; i++)
    {
        cin >> cont[i].first >> cont[i].second;
    }
    sort(cont.begin(), cont.end());

    vector<int> pf(c);
    for (int i = 0; i < c; i++)
    {
        if(i == 0) {pf[i] = cont[i].second;}
        else {pf[i] = max(pf[i-1], cont[i].second);}
    }

    ll ans = 0;
    for (int i = 0; i < p; i++)
    {
        int q, d;
        cin >> q >> d;
        int idx = upper_bound(cont.begin(), cont.end(), make_pair(q, INT_MAX)) - cont.begin() - 1;
        if(idx >= 0)
        {
            int bestS = pf[idx];
            if(bestS > d) {ans += (bestS - d);}
        }
    }
    cout << ans << nl;
    
    return (0);
}
