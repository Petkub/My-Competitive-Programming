#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n,k,cur=0,mx = 0; 
    cin>>n>>k;
    priority_queue <int> pq;
    for (int i = 0;i<n;i++)
    { 
        int a; cin >> a; 
        if (a >= 0)
        {
            cur+=a; 
        }
        else
        {
            pq.push(a); 
            if (pq.size() >= k)
            {
                cur += pq.top();
                pq.pop();
            }
        } 
        mx=max(cur,mx);
    }
    cout<<mx;
    return 0;
}