#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int N;cin>>N;
    stack<int> stk1,stk2;
    for(int i=1;i<=2*N;i++)
    {
        int n;cin>>n;
        stk2.push(n);
    }
    int cnt=0;
    while(!stk2.empty())
    {
        int t1 = stk2.top(); stk2.pop();
        stk1.push(t1);
        if(stk1.size()>=2)
        {
            int temp1=stk1.top();stk1.pop();
            int temp2=stk1.top();
            if(temp1==temp2)
            {
                stk1.pop();
            }
            else
            {
                stk1.push(temp1);
            }
        }
        cnt++;
    }
    if(!stk1.empty())
    {
        cout<<"impossible";
    }
    else
    {
        cout<<cnt;
    }
    return 0;
}