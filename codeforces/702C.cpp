#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF = 4e18;

int32_t main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n,m; cin>>n>>m;
    vector<int> tower(n),net(m);
    
    for(int i=0;i<n;i++) cin>>tower[i];
    for(int i=0;i<m;i++) cin>>net[i];
    vector<int> r;
    for(int i=0;i<n;i++)
    {
        auto lb = lower_bound(net.begin(),net.end(), tower[i]);
        int dist = 4e18;
        if (lb != net.end())
        {
            dist = min(dist, abs(*lb-tower[i]));
        }
        if (lb != net.begin())
        {
            lb--;
            dist = min(dist, abs(*lb-tower[i]));
        }
        r.push_back(dist);
    }
    cout<<*max_element(r.begin(),r.end());
    return 0;
}