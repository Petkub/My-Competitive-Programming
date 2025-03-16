#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vpli = vector<pair<ll, int>>;
using vll = vector<ll>;
const char nl = '\n';

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);

    int N;
    cin >> N;
    vpli party(N);

    for (size_t i = 0; i < N; i++)
    {
        cin >> party[i].first;
        party[i].second = i;
    }
    sort(party.rbegin(), party.rend());
    vll pf(N + 1);

    ll total = 0;
    for (size_t i = 1; i <= N; i++)
    {
        pf[i] = pf[i - 1] + party[i - 1].first;
    }
    total = pf[N];
    ll upper = total / 2 + 1;

    vll res(N);
    for (size_t i = 0; i < N; i++)
    {
        ll sumMa = party[i].first;
        int pos = party[i].second;
        int r = N - 1;
        int l = 0;
        int ans = N;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            ll curSum = 0LL;
            if (i >= mid)
            {
                curSum = pf[mid];
            }
            else
            {
                curSum = pf[mid + 1] - sumMa;
            }
            
            if (sumMa + curSum >= upper)
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        res[pos] = ans;
    }

    for (const ll &re: res)
    {
        cout << re << nl;
    }
    
    return (0);
}