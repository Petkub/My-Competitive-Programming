#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    string un;cin>>un;
    set<char> st;
    for(const char &c:un) st.insert(c);
    if(st.size()%2==0){cout<<"CHAT WITH HER!";}
    else {cout<<"IGNORE HIM!";}
    return 0;
}