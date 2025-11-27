#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> id(1000005);

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);
    int n; int tc=1;
    while(cin>>n and n!=0)
    {
        cout<<"Scenario #"<<tc++<<'\n';
        for(int i=0;i<n;i++)
        {
            int p; cin>>p;
            while(p--)
            {
                int t; cin>>t;
                id[t]=i;
            }
        }
        string cmd;
        queue<int> order;
        vector<queue<int>> tq(1005);
        while(cin>>cmd and cmd != "STOP")
        {
            if(cmd=="ENQUEUE")
            {
                int t; cin>>t;
                if(order.empty())
                {
                    order.push(id[t]);
                    tq[id[t]].push(t);
                    continue;
                }
                if(tq[id[t]].empty())
                {
                    order.push(id[t]);
                }
                tq[id[t]].push(t);
            }
            else if(cmd=="DEQUEUE")
            {
                if(!tq[order.front()].empty())
                {
                    cout<<tq[order.front()].front()<<'\n';
                    tq[order.front()].pop();
                    if(tq[order.front()].empty()) {order.pop();}
                }
            }
        }
        cout<<'\n';
    }
    return 0;
}