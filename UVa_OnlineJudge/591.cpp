#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n; int s=1;
    while(cin>>n and n!=0)
    {
        vector<int> v(n);
        int tot=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            tot+=v[i];
        }
        int avg=tot/n;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]<avg) cnt+=(avg-v[i]);
        }
        cout<<"Set #"<<s++;
        cout<<"\nThe minimum number of moves is "<<cnt<<".\n\n";
    }
    return 0;
}