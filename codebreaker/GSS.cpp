#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int N;cin>>N;
    vi vec(N);
    for(int &v:vec) cin>>v;
    sort(vec.rbegin(),vec.rend());
    int t=0,cnt=1;
    for(int i=0;i<N;i++)
    {
        if(cnt==4)
        {
            cnt=1;continue;
        }
        t+=vec[i];
        cnt++;
    }
    cout<<t;
    return 0;
}