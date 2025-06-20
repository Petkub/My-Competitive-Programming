#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int N,M;cin>>N>>M;
    int mn = INT_MAX;
    int dragon=0;
    for(int i=1;i<=N;i++)
    {
        int n;cin>>n;
        dragon+=n;
    }
    vector<int> v(M);
    for(int &e:v) cin>>e;

    for(int i=0;i<M;i++)
    {
        for(int j=i+1;j<M;j++)
        {
            int t=v[i]+v[j];
            if(t>=dragon)
            {
                mn=min(mn, t);
            }
        }
    }

    

    return 0;
}