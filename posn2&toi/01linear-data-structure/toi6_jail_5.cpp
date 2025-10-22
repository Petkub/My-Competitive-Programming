/*
    toi6_jail
    programming.in.th (toi6_jail)
*/
// #include <bits/stdc++.h>
#include<iostream>
#include<queue>
using namespace std;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    queue<int> q;
    for(int i=0;i<n;i++)
    {
        q.push(i+1);
    }

    while(!q.empty())
    {
        for(int i=1;i<=m-1;i++)
        {
            q.push(q.front());
            q.pop();
        }
        cout<<q.front()<<" ";
        q.pop();
    }
    return (0);
}
