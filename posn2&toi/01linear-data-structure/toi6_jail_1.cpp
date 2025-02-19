#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

int main()
{
    int n, m;
    cin >> n >> m;
    
    vi v(n);
    vi s;
    iota(v.begin(), v.end(), 1);
    auto it = v.begin();

    while (n--)
    {
        for (size_t i = 1; i < m; i++)
        {
            it++;
            if (it == v.end()) {it = v.begin();}
        }
        cout << *it << " ";
        it = v.erase(it);
        if (it == v.end() && !v.empty()) {it = v.begin();}
    }

    return (0);
}