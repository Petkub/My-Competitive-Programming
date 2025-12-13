#include<bits/stdc++.h>
using namespace std;
#define int long long 


int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    vector<tuple<int,int,string>> vic = {{8,6,"Province"},{5,3,"Duchy"},{2,1,"Estate"}};
    vector<tuple<int,int,string>> treasure = {{6,3,"Gold"},{3,2,"Silver"},{0,1,"Copper"}};
    int g,s,c; cin>>g>>s>>c;
    int tot=g*3+s*2+c*1;
    bool can = false;
    for(int i=0;i<3;i++)
    {
        auto [c,point,name] = vic[i];
        if(tot-c>=0)
        {
            cout<<name;
            can = true;
            break;
        }
    }
    for(int i=0;i<3;i++)
    {
        auto [c,point,name] = treasure[i];
        if(tot-c>=0)
        {
            if(can) cout<<" or "<<name;
            else cout<<name;
            break;
        }
    }

    return 0;
}