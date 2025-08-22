#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
using vpii = vector<pii>;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int N;cin>>N;
    vpii vec(N);
    for(auto &[k,v]:vec) {cin>>k;}
    for(auto &[k,v]:vec) {cin>>v;}
    sort(vec.begin(), vec.end(), [](pii &a,pii &b){
        return a.second < b.second;
    });
    int t=0,cnt=0;
    for(auto &[k,v]:vec)
    {
        t+=k+cnt;
        cnt+=v;
    }
    cout<<t;
    return 0;
}