#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(0);
    ll N;
    cin>>N;
    set<string> S;
    for(int i=0;i<N;i++)
    {
        string n;cin>>n;
        S.insert(n);
    }
    cout<<S.size();
    return 0;
}