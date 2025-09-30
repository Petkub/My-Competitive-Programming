#include<stdio.h>

int main()
{
    // int n;
    // scanf("%d", &n);
    char str[100];
    scanf("%s", str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            printf("%c", str[i]);
        }
    }
    return 0;
}