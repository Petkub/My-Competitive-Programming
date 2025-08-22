#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,t;
    cin>>l>>t;
    bool existed=true;
    for(int i=2;i<=t;i++)
    {
        if(l==1) {existed=false;break;}
        if (l%2==0) l = l/2;
        else l = l*3+1;
    }
    cout<<(existed? l:-1);
}