#include<bits/stdc++.h>
using namespace std;
#define int long long

bool check(string n)
{
    int p1=0,p2=n.length()-1;
    while(p1<=p2)
    {
        if(n[p1]!=n[p2]) return false;
        p1++,p2--;
    }
    return true;
}

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int s,e; cin>>s>>e;
    for(int i=s;i<=e;i++)
    {
        if(check(to_string(i))) cout<<"Palindrome!";
        else cout<<i;
        cout<<'\n';
    }
    return 0;
}