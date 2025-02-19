#include <bits/stdc++.h>
using namespace std;

typedef string str;
typedef const char cc;
using stc = stack<char>;
const char nl = '\n';

bool isMatch(cc &st, cc &c)
{
    return st == '(' && c == ')' || st == '[' && c == ']' || st == '{' && c == '}';
}

int main()
{
    cin.tie(0); ios::sync_with_stdio(false);
    int n;
    cin >> n;
    
    while (n--)
    {
        str s;
        stc st;
        bool correct = true;
        cin >> s;
        for (cc &c: s)
        {
            if (c == '(' || c == '{' || c == '[')
            {
                st.push(c);
            }
            else
            {
                if (st.empty() || !(isMatch(st.top(), c)))
                {
                    correct = false;
                    break;
                }
                st.pop();
            }
        }
        if (!st.empty())
        {
            correct = false;
        }

        cout << (correct? "yes":"no") << nl;
    }
    return (0);
}