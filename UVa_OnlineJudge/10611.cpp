#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    int N;
    cin>>N;
    vector<int> h(N);
    for(int &e:h) cin>>e;
    sort(h.begin(),h.end());
    int Q;
    cin>>Q;
    while(Q--)
    {
        int q;
        cin>>q;
        int s=-1,t=-1;
        auto lb=lower_bound(h.begin(),h.end(), q);
        if(lb!=h.end()&&*(lb-1)<q&&*lb!=h[0])
        {
            s=*(lb-1);
            cout<<s<<" ";
        }
        else if(lb==h.end()&& *(h.end()-1) < q)
        {
            cout<<h.back()<<" ";
        }
        else {cout<<"X ";}
        auto ub=upper_bound(h.begin(),h.end(), q);
        if(ub!=h.end()&&*ub>q)
        {
            t=*ub;
            cout<<t<<"\n";
        }
        else
        {
            cout<<"X\n";
        }
    }
    return 0;
}