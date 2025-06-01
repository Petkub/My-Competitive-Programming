#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
const char nl = '\n';

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);

    int w, l;
    cin >> w >> l;

    vector<vi> f(w, vi(l));
    for (size_t i = 0; i < w; i++)
    {
        for (size_t j = 0; j < l; j++)
        {
            cin >> f[i][j];
        }
    }
    int cnt = 0;
    for (size_t i = 0; i <= w - 5; i++)
    {
        for (size_t j = 0; j <= l - 5; j++)
        {
            set<int> plant;
            for (size_t r = i; r < i + 5; r++)
            {
                for (size_t c = j; c < j + 5; c++)
                {
                    plant.insert(f[r][c]);
                }
            }
            if (plant.size() >= 5)
            {
                cnt++;
            }
        }
    }
    cout << cnt << nl;
    return (0);
}