/*
    threeparen
    programming.in.th (1121)
*/
#include <bits/stdc++.h>
using namespace std;

bool isMatch(char top, char c)
{
    return top == '(' and c == ')' or top == '[' and c == ']' or top == '{' && c == '}';
}

int main()
{
    cin.tie(0); ios::sync_with_stdio(false);
    int n;
    cin >> n;
    
    while (n--)
    {
        string s;
        stack<char> stk;
        bool correct = true;
        cin >> s;
        for(int i=0;i<s.length();i++)
        {
            if (s[i] == '(' or s[i] == '{' or s[i] == '[')
            {
                stk.push(s[i]);
            }
            else
            {
                if (stk.empty() or !(isMatch(stk.top(), s[i])))
                {
                    correct = false;
                    break;
                }
                stk.pop();
            }
        }
        if (!stk.empty())
        {
            correct = false;
        }

        cout << (correct? "yes":"no") << '\n';
    }
    return (0);
}