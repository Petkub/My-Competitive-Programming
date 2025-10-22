/*
    stack
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    int n; cin >> n;
    stack<int> stk;

    while (n--)
    {
        string s;
        cin >> s;
        if (s == "push")
        {
            int val;
            cin >> val;
            stk.push(val);
        }
        else
        {
            if (!stk.empty())
            {
                cout<<stk.top();
                stk.pop();
            }
            else
            {
                cout<<"null";
            }
        }
    }
    return (0);
}