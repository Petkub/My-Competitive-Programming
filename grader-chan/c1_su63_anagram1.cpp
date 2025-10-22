/*
    c1_su63_anagram1
*/
#include<stdio.h>
#include<string.h>

int arr[200];

int main()
{
    char s[10005];
    scanf("%s", s);

    for(int i=0;i<strlen(s);i++)
    {
        arr[s[i]]++;
    }
    for(char ch = 'A';ch<='H';ch++)
    {
        printf("%d ", arr[ch]);
    }
    return 0;
}