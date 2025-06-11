#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    int Q; cin>>Q;
    set<ll> cups;
    ll rain = 0;
    while(Q--)
    {
        ll q, x; cin>>q>> x;
        if (q==1)
        {
            if(cups.count(x-rain))
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
        else if (q==2)
        {
            cups.insert(x-rain);
        }
        else if (q==3)
        {
            rain+=x;
        }
    }
    return 0;
}
