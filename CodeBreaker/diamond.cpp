#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    int n;
    cin>>n;
    int space=n-1;
    int star=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        space--;
        for(int j=1;j<=star;j++)
        {
            cout<<"*";
        }
        star+=2;
        cout<<'\n';
    }
    space=1;
    star=2*n-1-2;
    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        space++;
        for(int j=1;j<=star;j++)
        {
            cout<<'*';
        }
        star-=2;
        cout<<'\n';
    }

    return 0;
}