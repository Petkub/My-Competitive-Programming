#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    int N;cin>>N;
    vector<int> number(N+1, 0);
    for(int i=1;i<=N;i++)
    {
        int n;cin>>n;
        number[n]++;
    }
    for(int i=1;i<=N;i++)
    {
        if(number[i]==0){cout<<i;}
    }
    return 0;
}