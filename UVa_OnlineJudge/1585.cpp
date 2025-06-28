#include<bits/stdc++.h>
using namespace std;
typedef string str;
const char nl = '\n';

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);

    int n;
    cin >> n;
    while (n--)
    {
        str s;
        cin >> s;
        int sum = 0;
        int start = 1;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'X')
            {
                start = 1;
                continue;
            }
            else
            {
                sum += start;
                start++;
            }
        }
        cout << sum << nl;
    }
    return (0);
}