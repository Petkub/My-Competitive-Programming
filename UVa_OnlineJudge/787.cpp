#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n;
    vector<int> arr;
    while(cin>>n)
    {
        if(n!=-999999) arr.push_back(n);
        else
        {
            int sz=arr.size();
            int cur_mx=arr[0];
            int cur_mn=arr[0];
            int mx_ans=arr[0];
            for (int i=1;i<sz;i++)
            {
                int cur=arr[i];
                if (cur < 0) swap(cur_mx, cur_mn);
                cur_mx=max(cur, cur_mx * cur);
                cur_mn=min(cur, cur_mn * cur);

                mx_ans=max(mx_ans, cur_mx);
            }
            cout<<mx_ans<<'\n';
            arr.clear();
        }
    }
    return 0;
}