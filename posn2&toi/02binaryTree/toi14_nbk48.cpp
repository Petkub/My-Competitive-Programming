#include <bits/stdc++.h>
using namespace std;
using ii = pair<int, int>;
using vii = vector<ii>;
const char nl = '\n';

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    int N, Q;
    cin >> N >> Q;

    vii ppfs(N + 1);
    ppfs[0] = {0, 0};
    for (size_t i = 1; i <= N; i++)
    {
        int p; cin >> p;
        ppfs[i] = {ppfs[i - 1].first + p, i};
    }
    sort(ppfs.begin(), ppfs.end());

    vii pq(Q);
    for (size_t i = 0; i < Q; i++)
    {
        int j; cin >> j;
        pq[i] = {j, i};
    }
    sort(pq.begin(), pq.end());

    int maxIdx = 0;
    int ptr = 0;
    vector<int> res(Q);
    for (const ii &p: pq)
    {
        int bud = p.first;
        while (ptr <= N && bud >= ppfs[ptr].first)
        {
            maxIdx = max(maxIdx, ppfs[ptr].second);
            ptr++;
        }
        res[p.second] = maxIdx;
    }

    for (const int &r: res)
    {
        cout << r << nl;
    }
    return (0);
}