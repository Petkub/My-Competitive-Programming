#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int N,M;
    while(cin>>N>>M and (N!=0 and M!=0))
    {
        unordered_map<int,int> jack,jill;
        jack.reserve(N);jill.reserve(N);
        for(int i=1;i<=N;i++)
        {
            int n;cin>>n;
            jack[n]++;
        }
        for(int i=1;i<=M;i++)
        {
            int n;cin>>n;
            jill[n]++;
        }
        int cnt=0;
        for(auto &[k,v]: jack)
        {
            if(jill.count(k))
            {
                cnt++;
            }
        }
        cout<<cnt<<'\n';
        jack.clear();jill.clear();
    }
    return 0;
}