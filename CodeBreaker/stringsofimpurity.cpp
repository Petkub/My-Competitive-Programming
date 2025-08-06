#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    unordered_map<char, vector<int>> pos;
    string s,t;cin>>s>>t;
    for(int i=0;i<=s.size();i++)
    {
        pos[s[i]].push_back(i);
    }
    for(int i=0;i<=t.size();i++)
    {
        if(!pos.count(t[i]))
        {
            cout<<-1;
            return 0;
        }
    }
    int times=0;
    int curPos=-1;
    for(auto &c: t)
    {
        auto ub=upper_bound(pos[c].begin(),pos[c].end(),curPos);
        if(ub!=pos[c].end())
        {
            curPos=*ub;
        }
        else
        {
            times++;
            curPos=pos[c][0];
        }
    }
    cout<<s.size()*times+curPos+1<<'\n';
    return 0;
}