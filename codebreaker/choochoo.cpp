#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    int N;cin>>N;
    int cnt=0;
    while(N--)
    {
        string s;cin>>s;
        if(s=="chugga")cnt++;
    }
    if(cnt%2==0){cout<<"CHOO choo";}
    else{cout<<"choo CHOO";}
    return 0;
}