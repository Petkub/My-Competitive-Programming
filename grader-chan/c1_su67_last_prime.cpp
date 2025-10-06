#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n; cin>>n;
    deque<int> dq;
    for(int i=n-1;i>=0;i--)
    {
        bool prime=true;
        for(int j=2;j*j<=i;j++)
        {
            if(i%j==0) {prime=false;break;}
        }
        if(prime) dq.push_front(i);
        if(dq.size()==5) break;
    }
    while(!dq.empty())
    {
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
    return 0;
}