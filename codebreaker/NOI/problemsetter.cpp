#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ii = pair<int, int>;
const char nl = '\n';

int32_t main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    int c, p; cin >> c >> p;
    vector<ii> arr(c);
    for (int i = 0; i < c; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr.begin(), arr.end());
    vector<int> pf(c);
    for (int i = 0; i < c; i++)
    {
        if(i == 0) {pf[i] = arr[i].second;}
        else {pf[i] = max(pf[i-1], arr[i].second);}
    }
    ll ans = 0;
    for (int i = 0; i < p; i++)
    {
        int q, d; cin >> q >> d;
        int idx = upper_bound(arr.begin(), arr.end(), make_pair(q, INT_MAX)) - arr.begin() - 1;
        if(idx >= 0)
        {
            int mx = pf[idx];
            if(mx > d) {ans += (mx - d);}
        }
    }
    cout << ans;
    return (0);
}
