#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int t; scanf("%d",&t);
    while(t--)
    {
        char s[10005];
        scanf("%s", s);
        int n=sqrt(strlen(s));
        char arr[n][n];
        int k=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                arr[i][j]=s[k++];
            }
        }

        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         printf("%c",arr[i][j]);
        //     }
        //     printf("\n");
        // }
        for(int x=n-1;x>=0;x--)
        {
            for(int y=0;y<n;y++)
            {
                printf("%c", arr[y][x]);
            }
        }
        printf("\n");
    }

    return 0;
}