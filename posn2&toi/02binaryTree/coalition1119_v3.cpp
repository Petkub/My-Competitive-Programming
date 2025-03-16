#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;
using vpll = vector<pll>;
using vll = vector<long long>;
const char nl = '\n';

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int N;
    cin >> N;
    vll M(N);
    ll total = 0;
    for (int i = 0; i < N; i++) {
        cin >> M[i];
        total += M[i];
    }
    ll T = (total / 2LL) + 1LL;
    vpll party(N);
    for (int i = 0; i < N; i++) {
        party[i] = { M[i], i };
    }
    sort(party.begin(), party.end(), [&](auto &a, auto &b){
        return a.first > b.first;
    });
    vector<ll> pf(N+1, 0LL);
    for (int k = 1; k <= N; k++) {
        pf[k] = pf[k-1] + party[k-1].first;
    }
    vector<int> pos(N);
    for (int rank = 0; rank < N; rank++) {
        int i = party[rank].second;
        pos[i] = rank;
    }
    auto sumM = [&](int p, int k){
        if (k <= p) {
            return pf[k];
        } else {
            return pf[k+1] - party[p].first;
        }
    };
    for (int i = 0; i < N; i++) {
        int p = pos[i];
        ll seat = M[i];
        int l = 0, r = N; 
        int ans = N;
        while (l <= r) {
            int m = (l + r) / 2;
            ll sumK = sumM(p, m);
            ll totalSeats = seat + sumK;
            if (totalSeats >= T) {
                ans = m;
                r = m - 1; 
            } else {
                l = m + 1;
            }
        }
        cout << ans << nl;
    }
    return 0;
}