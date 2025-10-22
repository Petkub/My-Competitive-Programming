/*
    c1_su63_anagram2
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
int arr1[200];
int arr2[200];

int main()
{
    char s1[10005],s2[10005];
    scanf("%s%s", s1,s2);

    for(int i=0;i<strlen(s1);i++)
    {
        arr1[s1[i]]++;
    }
    for(int i=0;i<strlen(s2);i++)
    {
        arr2[s2[i]]++;
    }
    for(char ch = 'A';ch<='H';ch++)
    {
        printf("%d ", arr1[ch]);
    }
    printf("\n");
    for(char ch = 'A';ch<='H';ch++)
    {
        printf("%d ", arr2[ch]);
    }
    printf("\n");
    int tot=0;
    for(int ch='A';ch<='H';ch++)
    {
        int diff = abs(arr1[ch]-arr2[ch]);
        tot+=diff;
        printf("%d ", diff);
    }
    printf("\n");
    printf(tot<=3? "anagram":"no");
    return 0;
}