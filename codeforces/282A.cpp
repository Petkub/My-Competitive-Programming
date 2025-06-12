#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);ios::sync_with_stdio(false);
    int N;cin>>N;
    int x=0;
    while(N--)
    {
        string cmd;cin>>cmd;
        if(cmd[0]=='+'||cmd[cmd.length()-1]=='+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    cout<<x;
    return 0;
}