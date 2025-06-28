#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    int n,m;
    unordered_map<int, vector<int>> mp;
    while (cin>>n && cin>>m)
    {
        for(int i=1;i<=n;i++)
        {
            int ni;
            cin>>ni;
            mp[ni].emplace_back(i);
        }
        while(m--)
        {
            int k, v;
            cin >> k >> v;
            if(mp.count(v) && k <= (int)mp[v].size())
            {
                cout<<mp[v][k-1]<<'\n';
            }
            else cout<<"0\n";
        }
        mp.clear();
    }
    return 0;
}