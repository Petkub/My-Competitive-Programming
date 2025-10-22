/*
    wheel
    programming.in.th (1055)
*/
// #include <bits/stdc++.h>
#include<iostream>
#include<queue>
using namespace std;
#define int long long

int res[25];

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    queue<int> q;
    for(int i=0;i<n;i++)
    {
        int v; cin>>v;
        q.push(v);
    }
    int p=0;
    while(!q.empty())
    {
        int rand; cin>>rand;
        for(int i=1;i<=rand;i++)
        {
            q.push(q.front());
            q.pop();
        }
        res[p++ % k] += q.front();
        q.pop();
    }
    for(int i=0;i<k;i++)
    {
        cout<<res[i]<<"\n";
    }
    return (0);
}