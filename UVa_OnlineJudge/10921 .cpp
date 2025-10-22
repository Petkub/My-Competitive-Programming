#include<stdio.h>

int main()
{
    char str[31];
    while(scanf("%s",str)==1)
    {
        for(int i=0;str[i]!='\0';i++)
        {
            char ch=str[i];
            if(ch>='A'&&ch<='C') printf("2");
            else if(ch>='D'&&ch<='F') printf("3");
            else if(ch>='G'&&ch<='I') printf("4");
            else if(ch>='J'&&ch<='L') printf("5");
            else if(ch>='M'&&ch<='O') printf("6");
            else if(ch>='P'&&ch<='S') printf("7");
            else if(ch>='T'&&ch<='V') printf("8");
            else if(ch>='W'&&ch<='Z') printf("9");
            else printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}