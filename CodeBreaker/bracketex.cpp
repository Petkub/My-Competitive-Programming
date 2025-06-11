#include<bits/stdc++.h>
using namespace std;

bool isMatch(const char &p1, const char &p2)
{
    return (p1=='(' && p2==')')||(p1=='['&&p2==']')||(p1=='{'&&p2=='}');
}

int main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    int N; cin>>N;
    string paren;
    cin>>paren;
    stack<char> st;
    bool isValid=true;
    for(const char &c:paren)
    {
        if(st.empty()) {st.push(c);}
        else
        {
            if(c=='(' || c=='[' || c=='{') st.push(c);
            else
            {
                if(!isMatch(st.top(), c))
                {
                    isValid=false;
                    break;
                }
                else
                {
                    st.pop();
                }
            }
        }
    }
    if(!st.empty() || !isValid) cout<<"Invalid";
    else if(isValid) cout<<"Valid";
    
    return 0;
}