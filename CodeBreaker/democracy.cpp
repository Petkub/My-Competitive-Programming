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
	auto [x,mx] = *vote.begin();
    int nvote = x;
    for (auto &[k,v]:vote)
    {
        if(v>=mx)
        {
            mx=v;
            nvote=k;
        }
    }
    cout<<nvote;
    return 0;
}