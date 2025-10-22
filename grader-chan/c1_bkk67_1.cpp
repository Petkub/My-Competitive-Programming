/*
    c1_bkk67_1
*/
#include<stdio.h>
#include<string.h>

int arr[200]; //{0, 0, 0, ..., 0}

int main()
{
    char s[35];
    scanf("%s", s);
    for(int i=0;i<strlen(s);i++)
    {
        arr[s[i]]=1;
    }
    for(int i=0;i<200;i++)
    {
        if(arr[i]==1) printf("%c ", i);
    }
    return 0;
}