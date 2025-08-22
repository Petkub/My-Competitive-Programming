#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    deque<int> dq;
    stack<int> stkF,stkB;
    int n;cin>>n;
    while(n--)
    {
        int cmd;cin>>cmd;
        if(cmd==1)
        {
            int v;cin>>v;
            dq.push_back(v);
            if(stkB.empty()||v<=stkB.top())
            {
                stkB.push(v);
            }
        }
        else if(cmd==3)
        {
            int v;cin>>v;
            dq.push_front(v);
            if(stkF.empty()||v<=stkF.top())
            {
                stkF.push(v);
            }
        }
        else if(cmd==2)
        {
            if(!stkB.empty()&&dq.back()==stkB.top())
            {
                stkB.pop();
            }
            dq.pop_back();
        }
        else if(cmd==4)
        {
            if(!stkF.empty()&&dq.front()==stkF.top())
            {
                stkF.pop();
            }
            dq.pop_front();
        }
        else if(cmd==5)
        {
            if(stkF.empty()) cout<<stkB.top()<<'\n';
            else if(stkB.empty()) cout<<stkF.top()<<'\n';
            else cout<<min(stkF.top(),stkB.top())<<'\n';
        }
    }
    return 0;
}