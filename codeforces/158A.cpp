#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int N,K;cin>>N>>K;
    vector<int> score(N+1,0);
    int cnt=0;
    for(int i=1;i<=N;i++)
    {
        int a;cin>>a;
        score[i]=a;
    }
    for(int i=1;i<=N;i++)
    {
        if(score[i]>0&&score[i]>=score[K]) cnt++;
    }
    cout<<cnt;
    return 0;
}