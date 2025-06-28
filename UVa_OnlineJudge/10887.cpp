#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    int T;                       
    cin >> T;
    for (int tc = 1; tc <= T; tc++)
    {
        int n, m;
        cin >> n >> m;
        cin.ignore();
        vector<string> A(n), B(m);
        for (auto &w : A) getline(cin, w);
        for (auto &w : B) getline(cin, w);
        unordered_set<string> seen;
        seen.reserve(n * m * 2);

        string buf;
        buf.reserve(20);
        for (const auto &x : A)
        {
            for (const auto &y : B)
            {
                buf = x;
                buf += y;
                seen.insert(buf);
            }
        }

        cout << "Case " << tc << ": " << seen.size() << '\n';
    }
    return 0;
}
