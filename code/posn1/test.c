#include<stdio.h>
#include<string.h>

int arr1[200];
int arr2[200];

int main()
{
    char s1[10005];
    char s2[10005];
    scanf("%s %s", s1,s2);
    for(int i=0;strlen(s1);i++)
    {
        arr1[s1[i]]++;
    }
    for(int i=0;strlen(s2);i++)
    {
        arr2[s2[i]]++;
    }
    for(char ch='A';ch<='H';ch++)
    {
        printf("%d ", arr1[ch]);
    }
    printf("\n");
    for(char ch='A';ch<='H';ch++)
    {
        printf("%d ", arr2[ch]);
    }
    printf("\n");
    int tot=0;
    for(char ch='A';ch<='H';ch++)
    {
        int diff = abs(arr1[ch] - arr2[ch]);
        printf("%d ", diff);
        tot+=diff;
    }
    printf("\n");
    if(tot<=3) printf("anagram");
    else printf("no");
    return 0;
}