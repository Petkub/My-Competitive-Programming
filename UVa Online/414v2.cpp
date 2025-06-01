#include <bits/stdc++.h>

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int n;
    int sum;
    vector<int> res;
    
    while (cin >> n, n != 0)
    {
        vector<int> v(n, 0);
        cin.ignore();
        string s;
        int ts = 0;
        int min_s = INT_MAX;

        for (size_t i = 0; i < n; i++)
        {
            getline(cin, s);
            int lEnd = s.find(' ');
            int rStart = s.rfind(' ');
            int space = (lEnd > 0) ? (rStart - lEnd + 1) : 0;
            min_s = min(space, min_s);
            v.push_back(space);
            ts += space;
        }
        res.push_back(ts - min_s * n);
    }

    for (const int &r: res)
    {
        cout << r << '\n';
    }
    return (0);
}