#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n,dm; cin>>n>>dm;
    for(int i=0;i<n;i++)
    {
        int dmi; cin>>dmi;
        if(dmi<=dm)
        {
            cout<<"It hadn't snowed this early in "<<i<<" years!";
            return 0;
        }
    }
    cout<<"It had never snowed this early!";
    return 0;
}