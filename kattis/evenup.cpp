#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int N;cin>>N;
    stack<int> stk;
    while(N--)
    {
        int n;cin>>n;
        stk.push(n);
        if(stk.size()>=2)
        {
            int t1=stk.top();stk.pop();
            int t2=stk.top();
            if((t1+t2)%2==0)
            {
                stk.pop();
            }
            else
            {
                stk.push(t1);
            }
        }
    }
    cout<<stk.size();
    return 0;
}