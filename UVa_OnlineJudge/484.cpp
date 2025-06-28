#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    vector<int> order;
    unordered_map<int, int> ump;
    int n;
    while (cin >> n)
    {
        if (!ump[n])
        {
            ump[n] = 1;
            order.emplace_back(n);
            continue;
        }
        ump[n]++;
    }

    for (const auto &o: order)
    {
        cout << o << " " << ump[o] << '\n';
    }
    return (0);
}