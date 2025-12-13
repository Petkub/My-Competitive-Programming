#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n;
    while(cin>>n)
    {
        if(n<=1) {cout<<"Jolly"; continue;}
        vector<int> v(n);
        vector<bool> num(300005, false);
        for(int i=0;i<n;i++)
        {
            num[i+1]=true;
            cin>>v[i];
        }
        num[n]=false;
        bool isJolly=true;
        for(int i=1;i<n;i++)
        {
            if(!num[abs(v[i]-v[i-1])]) {isJolly=false; break;}
        }
        if(isJolly) cout<<"Jolly\n";
        else cout<<"Not jolly\n";
    }
    return 0;
}