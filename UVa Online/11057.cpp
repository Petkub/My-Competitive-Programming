#include<bits/stdc++.h>
using namespace std;
const int INF = 2e9;

int main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    int N;
    while(cin>>N)
    {
        vector<int> p(N);
        for(int &e:p) cin>>e;
        sort(p.begin(),p.end());
        int M,b1=-1,b2=-1;
        cin>>M;
        for(int i=0;i<N-1;i++)
        {
            auto it=lower_bound(p.begin()+i+1,p.end(),M-p[i]);
            if(*it==M-p[i])
            {
                b1=p[i];
                b2=*it;
            }
        }
        cout<<"Peter should buy books whose prices are "<<b1<<" and "<<b2<<".\n\n";
    }
    return 0;
}