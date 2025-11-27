#include<bits/stdc++.h>
using namespace std;
#define int long long

bool isOk(const char top, const char ch)
{
    if((top=='(' and ch==')') or (top=='[' and ch==']') or (top=='{' and ch=='}')) return true;
    return false;
}

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n; cin>>n;
    string dummy; getline(cin, dummy);
    while(n--)
    {
        bool correct = true;
        string s; getline(cin, s);
        stack<char> stk;
        for(char &ch: s)
        {
            if(ch=='(' or ch=='{' or ch=='[')
            {
                stk.push(ch);
            }
            else
            {
                if(!stk.empty() and (isOk(stk.top(), ch)))
                {
                    stk.pop();
                }
                else if (stk.empty() or (!stk.empty() and !(isOk(stk.top(), ch))))
                {
                    correct=false;
                    break;
                }
            }
        }
        if(!correct) {cout<<"No\n"; continue;}
        if(!stk.empty()) cout<<"No\n";
        else cout<<"Yes\n";
    }
    return 0;
}