#include <bits/stdc++.h>

using namespace std;
using di = deque<int>;
using vi = vector<int>;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);

    int n, m;
    cin >> n >> m;
    di deq(n);
    vi s;
    iota(deq.begin(), deq.end(), 1);
    int pos = 0;
    int size = n;

    while (n--)
    {
        pos = (pos + m - 1) % size--;
        s.push_back(deq[pos]);
        deq.erase(deq.begin() + pos);
    }

    for (auto &re: s)
    {
        cout << re << " ";
    }

    return(0);
}