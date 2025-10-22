#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    char s[101];
    scanf("%s", s);
    printf("%c", s[0]);
    for(int i=1;i<strlen(s);i++)
    {
        if(s[i]=='-')
        {
            printf("%c", s[++i]);
        }
    }
    return 0;
}