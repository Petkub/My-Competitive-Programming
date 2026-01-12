#include<bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr<<#x<<" = "<<x<<'\n';

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int tc;cin>>tc;
    while(tc--)
    {
        int n,m; cin>>n>>m;
        vector<vector<int>> v(m, vector<int>(n));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++) cin>>v[j][i];
        }
        int tot=0;
        for(int i=0;i<m;i++)
        {
            sort(v[i].begin(),v[i].end());
            for(int k=0;k<n;k++)
            {
                int l = k;
                int r = n-1-k;
                tot += v[i][k] * (l-r);
            }
        }
        cout<<tot<<'\n';
    }
    return 0;
}