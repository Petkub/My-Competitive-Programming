#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    int N;cin>>N;
    int total=0;
    for(int i=1;i<=N;i++)
    {
        int m,s;
        cin>>m>>s;
        total+=m*60+s;
    }
    int x=total/60;
    int y=total%60;
    cout<<x<<" "<<y;
    return 0;
}