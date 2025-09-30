#include<iostream>
#include<string.h>
using namespace std;
#define int long long

int32_t main()
{
    char str[10005];
    scanf("%s", str);
    int arr[200];
    memset(arr, -1, sizeof(arr));
    memset(arr+(int)'A', 0, sizeof(arr[0])*8);

    for(size_t i=0;i<strlen(str);i++)
    {
        arr[str[i]]++;
    }

    for(char ch='A';ch<='H';ch++)
    {
        printf("%d ",arr[ch]);
    }
    
    return 0;
}