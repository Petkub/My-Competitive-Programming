#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n;
    scanf("%lld", &n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld", &arr[i]);
    }
    int sum_mx=arr[0];
    int mx=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>mx)
        {
            mx=arr[i];
            sum_mx+=mx;
        }
    }
    printf("%lld", sum_mx);
    return 0;
}