#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using vl = vector<ll>;
using dqi = deque<int>;
const char nl = '\n';


int main()
{
    cin.tie(0); ios::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;

    vl vt(k);
    dqi dq;
    for (size_t i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        dq.push_back(val);
    }
    int i = 0;
    while (!dq.empty())
    {
        int rand;
        cin >> rand;
        for (size_t i = 1; i <= rand; i++)
        {
            dq.push_back(dq.front());
            dq.pop_front();
        }
        vt[i++ % k] += dq.front();
        dq.pop_front();
    }

    for (const int &i: vt)
    {
        cout << i << nl;
    }
    return (0);
}