#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int N; cin>>N;
    int arr[N][N];
    memset(arr, 0, sizeof(arr));
    for(int i=1;i<N;i++)
    {
        for(int j=0;j<i;j++)
        {
            cin>>arr[i][j];
            arr[j][i]=arr[i][j];
        }
    }
    
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}