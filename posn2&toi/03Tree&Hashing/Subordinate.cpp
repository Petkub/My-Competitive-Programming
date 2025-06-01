#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    map<int, int> mp;
    map<int, vi> sub;
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        int s;
        cin >> s;
        sub[s].emplace_back(i);
    }

    for (int i = 1; i <= n; i++)
    {
        mp[i] += sub[i].size();
        vi vsub = sub[i];
        for (size_t j = 0; j < vsub.size(); j++)
        {
            mp[i] += sub[vsub[j]].size();
        }
    }

    for (auto [k, v]: mp)
    {
        cout << v << " ";
    }

    // for (auto [k, v]: sub)
    // {
    //     cout << k << "-> ";
    //     for (int e: v)
    //     {
    //         cout << e << " ";
    //     }
    //     cout << '\n';
    // }

    return 0;
}