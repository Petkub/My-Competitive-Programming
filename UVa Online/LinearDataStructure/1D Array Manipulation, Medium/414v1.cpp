#include <bits/stdc++.h>
using namespace std;

int fs(string &s)
{
    int c = 0;
    for (size_t i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            c++;
        }
    }
    return (c);
}

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    vector<int> v;
    int n;
    while (cin >> n, n != 0)
    {
        int rs = 0;
        int t_space = 0;
        int min = INT_MAX;
        cin.ignore();

        for (size_t i = 0; i < n; i++)
        {
            string s;
            getline(cin, s);
            int space = fs(s);
            t_space += space;
            if (space < min)
            {
                min = space;
            }
        }
        v.push_back(t_space - min * n);
    }

    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i] << '\n';
    }
    return (0);
}