#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b;cin>>a>>b;
    int cnt=0;
    for(int i=a;i<=b;i++)
    {
        string s=to_string(i);
        sort(s.begin(),s.end());
        auto lb = lower_bound(s.begin(), s.end(), '9');
        if(lb!=s.end())
        {
            int idx = lb-s.begin();
            cnt += s.length()-idx;
        }
    }
    cout<<cnt;

    return 0;
}