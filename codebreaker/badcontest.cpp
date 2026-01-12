#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n; cin>>n;
    if(n==1)
    {
        int a,b;cin>>a>>b;
        if(a>=b)cout<<"Yes";
        else cout<<"No";
        return 0;
    }
    int tot=0;
    for(int i=1;i<=n;i++)
    {
        int x;cin>>x;
        tot+=x;
    }
    vector<int> v(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int med = v[n/2+1];
    if(tot>=med) cout<<"Yes";
    else cout<<"No";
    return 0;
}

//3
//1 2 2
//4 5 6
//tot = 6
//med = 3/2 = 1.5 => 2, med = B[2] = 5 (1-indexed)
//tot(6) >= med(5) -> Yes

//3
//1 2 2
//4 5 6
//tot = 6
//n -> odd: n = 4, n /=2 -> n=2, med = B[2] = 6 (0-indexed)