#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);

    string s;
    set<string> words;
    char c;
    while (cin.get(c))
    {
        if (isalpha(c))
        {
            s += tolower(c);
        }
        else
        {
            if (!s.empty())
            {
                words.insert(s); s.clear();
            }
        }
    }
    if (!s.empty())
    {
        words.insert(s);
    }
    for (auto &w: words)
    {
        cout << w << '\n';
    }
    return (0);
}