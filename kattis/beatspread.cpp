#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int t; scanf("%lld", &t);
    while(t--)
    {
        int s,d; scanf("%lld%lld",&s,&d);
        if(s<d or (s+d)%2==1 or (s-d)%2==1)
        {
            printf("impossible\n");
            continue;
        }
        printf("%lld %lld\n",(s+d)/2, (s-d)/2);
    }
    return 0;
}