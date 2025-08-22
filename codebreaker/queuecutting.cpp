#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    list<int> lst;
    unordered_map<int, list<int>::iterator> pos;
    int q;cin>>q;
    while (q--)
    {
        int cmd;cin>>cmd;
        if(cmd==1)
        {
            int x;cin>>x;
            lst.push_back(x);
            pos[x]=prev(lst.end());
        }
        else if(cmd==2)
        {
            int y,z; cin>>y>>z;
            auto posZ = pos[z];
            auto posY = lst.insert(next(posZ), y);
            pos[y]=posY;
        }
        else if(cmd==3)
        {
            int idFront = lst.front();
            cout<<idFront<<'\n';
            lst.pop_front();
            pos.erase(idFront);
        }
    }
    return 0;
}