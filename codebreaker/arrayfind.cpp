#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    int L,Q;
    cin>>L;
    vi arr(L, 0);
    for(int &v:arr) cin>>v;
    sort(arr.begin(),arr.end());
    cin>>Q;
    while(Q--)
    {
        int x;cin>>x;
        int smIdx = lower_bound(arr.begin(),arr.end(),x) - arr.begin();
        int gtIdx = upper_bound(arr.begin(),arr.end(),x) - arr.begin();
        cout<<"Smaller: "<<smIdx<<", Greater: "<<L-gtIdx<<'\n';
    }
    return 0;
}