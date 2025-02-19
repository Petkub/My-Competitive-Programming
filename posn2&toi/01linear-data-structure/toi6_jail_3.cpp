#include <bits/stdc++.h>
using namespace std;
using di = deque<int>;

int main()
{
    cin.tie(0); ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    di deq(n);
    iota(deq.begin(), deq.end(), 1);

    while (n--)
    {
        for (size_t i = 1; i < m; i++)
        {
            deq.push_back(deq.front());
            deq.pop_front();
        }
        cout << deq.front() << " ";
        deq.pop_front();
    }
    return (0);
}