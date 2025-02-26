#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using plli = pair<ll, int>;
using pii = pair<int, int>;
const char nl = '\n';

int main()
{
    cin.tie(nullptr); ios_base::sync_with_stdio(false);
    int n, q; cin >> n >> q;

    vector<pii> ppfs(n + 1);
    ppfs[0] = {0, 0};
    for (int i = 1; i <= n; i++)
    {
        int p; cin >> p;
        ppfs[i].first = ppfs[i - 1].first + p;
        ppfs[i].second = i;
    }
    sort(ppfs.begin(), ppfs.end());

    vector<pii> qr(q);
    for (size_t i = 0; i < q; i++)
    {
        int qj; cin >> qj;
        qr[i] = {qj, i};
    }
    sort(qr.begin(), qr.end());

    int ptr = 0;
    int mIdx = 0;
    vector<int> output(q);
    for (const pii &qq: qr)
    {
        while (ptr < n + 1 && ppfs[ptr].first <= qq.first)
        {
            mIdx = max(mIdx, ppfs[ptr].second);
            ptr++;
        }
        output[qq.second] = mIdx;
    }
    for (const int &o: output)
    {
        cout << o << nl;
    }

    return (0);
}