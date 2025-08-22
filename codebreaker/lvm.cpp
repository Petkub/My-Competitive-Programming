#include<bits/stdc++.h>
using namespace std;
using psi = pair<string,int>;
using vpsi = vector<psi>;

int main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    int N;cin>>N;
    vpsi order(N);
    for(int i=0;i<N;i++)
    {
        string cmd;cin>>cmd;
        if(cmd=="PUSH"||cmd=="IFZERO")
        {
            int n;cin>>n;
            order[i]={cmd,n};
            continue;
        }
        order[i]={cmd,0};
    }
    stack<int> stk;
    int reg=0;
    int i=0;
    while(true)
    {
        string cmd=order[i].first;
        if(cmd=="PUSH")
        {
            stk.push(order[i].second);
        }
        else if(cmd=="IFZERO")
        {
            if(!stk.empty()&&stk.top()==0)
            {
                i=order[i].second;
                stk.pop();
                continue;
            }
            stk.pop();
        }
        else if(cmd=="STORE")
        {
            if(!stk.empty()) {reg=stk.top();stk.pop();}
        }
        else if(cmd=="LOAD")
        {
            stk.push(reg);
        }
        else if(cmd=="PLUS")
        {
            int f=stk.top();stk.pop();
            int s=stk.top();stk.pop();
            stk.push(f+s);
        }
        else if(cmd=="TIMES")
        {
            int f=stk.top();stk.pop();
            int s=stk.top();stk.pop();
            stk.push(f*s);
        }
        else if(cmd=="DONE")
        {
            cout<<stk.top();
            break;
        }
        i++;
    }
    return 0;
}