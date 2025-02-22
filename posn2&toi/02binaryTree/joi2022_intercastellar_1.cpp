#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using vi = vector<int>;
using vll = vector<ll>;
const char nl = '\n';

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    int N;
    cin >> N;
    vll p;

    while (N--)
    {
        ll A;
        int c = 1;
        cin >> A;
        while (A % 2 == 0)
        {
            A /= 2;
            c *= 2;
        }
        for (int i = 1; i <= c; i++)
        {
            p.push_back(A);
        }
    }
    int Q;
    cin >> Q;
    ll size = p.size();
    while (Q--)
    {
        ll x;
        cin >> x;
        auto it = p.begin();
        for (ll i = 1; i < x; i++)
        {
            it++;
        }
        cout << *it << nl;
    }

    return (0);
}



