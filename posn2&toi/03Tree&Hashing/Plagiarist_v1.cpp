#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';

int main()
{
    cin.tie(nullptr); ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    deque<int> deq(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> deq[i];
    }
    int b;

    while (n--)
    {
        cin >> b;
        --b;
        cout << deq[b] << nl;
        deq.erase(deq.begin() + b);
    }

    return (0);
}