#include<bits/stdc++.h>
using namespace std;
// #include "sandd.h"
#define ll long long
int supply(int P);
int demand(int P);

int getPrice(int P)
{
    ll l=0,h=P,ans=-1;
    while(l<=h)
    {
        ll mid= (l+h)/2;
        ll s=supply(mid);
        ll d=demand(mid);
        if(s>d)
        {
            h=mid-1;
        }
        else if(d>=s)
        {
            ans=mid;
            l=mid+1;
        }
    }
    return ans;
}