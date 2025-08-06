#include<iostream>
#include<stack>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    stack<char> stk;
    int t;cin>>t;
    while(t--)
    {
        int cnt=0;
        int n;cin>>n;
        string s;cin>>s;
        for(int i=0;i<n;i++)
        {
            if(stk.empty())
            {
                stk.push(s[i]); continue;
            }
            if(stk.top()=='(' and s[i]==')')
            {
                stk.pop();
                continue;
            }
            else if(stk.top()==')' and s[i]=='(' and s[i+1]!=')')
            {
                cnt++;
                stk.pop();
                continue;
            }
            else
            {
                stk.push(s[i]);
            }
        }
        cout<<cnt<<'\n';
    }
    return 0;
}