#include<stdio.h>

int l[15],used[15];

int main()
{
    int n;
    char s[13];
    scanf("%d%s",&n,s);
    for(int i=0;i<15;i++) l[i]='A'+i;
    int k=0;
    while(l[k]!=0) printf("%c ", l[k++]);
    return 0;
}