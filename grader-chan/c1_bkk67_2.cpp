/*
    c1_bkk67_2
*/
#include<stdio.h>
#include<string.h>

int arr[200];
int main()
{
    char s1[21],s2[21];
    scanf("%s%s",s1,s2);
    for(int i=0;i<strlen(s1);i++)
    {
        for(int j=0;j<strlen(s2);j++)
        {
            if(s1[i]==s2[j])
            {
                if(arr[s1[i]]==0)
                {
                    printf("%c ",s1[i]);
                    arr[s1[i]]=1;
                }
            }
        }
    }
    return 0;
}