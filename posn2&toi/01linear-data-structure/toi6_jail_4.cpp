#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    list<int> lst(n);
    iota(lst.begin(), lst.end(), 1);

    int pos = 0;
    int size = n;
    auto it = lst.begin();
    while (!lst.empty())
    {
        for (int i = 1; i < m; i++)
        {
            ++it;
            if (it == lst.end()) {it = lst.begin();}
        }
        cout << *it << ' ';
        it = lst.erase(it);
        if (it == lst.end() && !lst.empty()) {it = lst.begin();}
    }
    return (0);
}