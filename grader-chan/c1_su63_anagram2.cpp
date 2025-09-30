#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    char s1[10005],s2[10005];
    scanf("%s%s", s1,s2);
    int a1[200],a2[200];
    memset(a1, -1, sizeof(a1));
    memset(a2, -1, sizeof(a2));

    memset(a1+(int)'A', 0, sizeof(a1[0])*8);
    memset(a2+(int)'A', 0, sizeof(a2[0])*8);
    
    for(int i=0;i<strlen(s1);i++) a1[s1[i]]++;
    for(int i=0;i<strlen(s2);i++) a2[s2[i]]++;

    for(char ch='A';ch<='H';ch++)
    {
        printf("%lld ", a1[ch]);
    }
    printf("\n");
    for(char ch='A';ch<='H';ch++)
    {
        printf("%lld ", a2[ch]);
    }
    printf("\n");
    int cnt=0;
    for(char ch='A';ch<='H';ch++)
    {
        int df = abs(a1[ch] - a2[ch]); 
        if(df > 0)
        {
            cnt++;
        }
        printf("%lld ", df);
    }
    printf("\n");
    if(cnt>3) printf("no");
    else printf("anagram");
    return 0;
}