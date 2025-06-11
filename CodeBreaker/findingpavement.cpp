#include<bits/stdc++.h>
using namespace std;


int main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    int H,W;cin>>H>>W;
    int r,c;
    for(int i=1;i<=H;i++)
    {
        for(int j=1;j<=W;j++)
        {
            string w;cin>>w;
            if(w=="pavement")
            {
                r=i;c=j;
                cout<<r<<" "<<c;
                break;
            }
        }
    }
    return 0;
}