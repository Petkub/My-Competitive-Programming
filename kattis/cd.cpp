#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int N,M;
    while((cin>>N>>M) and (N!=0 and M!=0))
    {
        vector<bool> jack((int)6e6+5, false);
        for(int i=0;i<N;i++)
        {
            int n; cin>>n;
            jack[n]=true;
        }
        int cnt=0;
        for(int i=0;i<M;i++)
        {
            int n; cin>>n;
            if(jack[n]) cnt++;
        }
        cout<<cnt<<'\n';
    }
    return 0;
}