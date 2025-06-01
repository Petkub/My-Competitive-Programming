#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;
    vi a, b;
    for (int i = 1; i <= N; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= M; i++)
    {
        cin >> b[i];
    }

    int ans = 1;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            if (a[i] == b[j])
            {
                ans++;
            }
            else if (j % 2 == i % 2)
            {
                if ((a[i] < b[j] && a[i - 1] > b[j - 1]) || (a[i] > b[j] && a[i - 1] < b[j - 1]))
                {
                    ans++;
                }
            }
            else
            {
                if ((a[i] < b[j - 1] && a[i - 1] > b[j]) || (a[i] > b[j - 1] && a[i - 1] < b[j]))
                {
                    ans++;
                }
            }
        }
    }
    cout << ans;
    return (0);
}