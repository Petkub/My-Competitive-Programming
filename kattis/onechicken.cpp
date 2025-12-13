#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n,m; cin>>n>>m;
    if(n<m and m-n>1) cout<<"Dr. Chaz will have "<<m-n<<" pieces of chicken left over!";
    else if(n<m and m-n==1) cout<<"Dr. Chaz will have "<<m-n<<" piece of chicken left over!";
    else if(n>m and n-m>1) cout<<"Dr. Chaz needs "<<n-m<<" more pieces of chicken!";
    else cout<<"Dr. Chaz needs "<<n-m<<" more piece of chicken!";
    return 0;
}