#include <bits/stdc++.h>
using namespace std;

typedef string str;
using vs = vector<string>;
using sts = stack<string>;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);

    int n; cin >> n;
    vs vt;
    sts st;

    while (n--)
    {
        str s;
        cin >> s;
        if (s == "push")
        {
            str val;
            cin >> val;
            st.push(val);
        }
        else
        {
            if (!st.empty())
            {
                vt.push_back(st.top());
                st.pop();
            }
            else
            {
                vt.push_back("null");
            }
        }
    }
    for (const str &s: vt)
    {
        cout << s << '\n';
    }

    return (0);
}