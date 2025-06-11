#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    int N;
    cin>>N;
    map<int,int> vote;
    while(N--)
    {
        int n;
        cin>>n;
        vote[n]++;
    }
    int mx = vote.begin()->second;
    int x= vote.begin()->first;
    for (auto &[k, v]:vote)
    {
        if(v>=mx)
        {
            mx=v;
            x=k;
        }
    }
    cout<<x;
    return 0;
}