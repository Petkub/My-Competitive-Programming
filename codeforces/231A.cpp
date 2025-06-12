#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);ios::sync_with_stdio(false);
    int N,cnt=0;cin>>N;
    while(N--)
    {
        int sum=0;
        for(int i=1;i<=3;i++)
        {
            int k;cin>>k;
            sum+=k;
        }
        if(sum>=2) {cnt++;}
    }
    cout<<cnt;
    return 0;
}