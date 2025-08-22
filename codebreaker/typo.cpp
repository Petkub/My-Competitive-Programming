#include<bits/stdc++.h>
using namespace std;
using str=string;

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    str a,b;cin>>a>>b;
    if(a==b){cout<<"Yes";return 0;}
    for(int i=0;i<a.length()-1;i++)
    {
        str tmp;
        tmp=b;
        swap(tmp[i],tmp[i+1]);
        if(tmp==a)
        {
            cout<<"Yes";return 0;
        }
    }
    cout<<"No";
    return 0;
}