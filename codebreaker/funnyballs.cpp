#include<bits/stdc++.h>
using namespace std;
#define int long long
using ii = pair<int,int>;
const int INF=4e18;
#define all(x) x.begin()+1, x.end()

bool comp(ii a, ii b)
{
    if(a.first==b.first) return a.second < a.second;
    return a.first > b.first;
}

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n,k; cin>>n>>k;
    vector<ii> arr(n+1);
    for(int i=1;i<=n;i++)
    {
        int s; cin>>s;
        arr[i]={s,i};
    }
    sort(all(arr),comp);
    int mx=0;
    vector<int> pos(k+1);
    for(int i=1;i<=k;i++)
    {
        mx+=arr[i].first;
        pos[i]=arr[i].second;
    }
    cout<<mx<<'\n';
    sort(all(pos));
    int L=1,R=k;
    bool sus=true;
    while(L<=R)
    {
        if(sus) {cout<<pos[L++]<<" ";}
        else {cout<<pos[R--]<<" ";}
        sus=!sus;
    }
    return 0;
}