#include<stdio.h>

int my_strlen(char *s)
{
    int cnt=0;
    int i=0;
    while(s[i++]!='\0') {cnt++;}
    return cnt;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int t=1;t<=n;t++)
    {
        char s[100000];
        scanf("%s", s);
        int pt;
        printf("Case %d: ",t);
        for(int i=0;i<(int)my_strlen(s);i+=pt)
        {
            int k=i+1;
            int tot=0;
            pt=1;
            while(k<(int)my_strlen(s) && (s[k]>='0'&&s[k]<='9'))
            {
                tot = tot*10+(int)(s[k]-'0');
                pt++; k++;
            }
            for(int j=1;j<=tot;j++)
            {
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }
    return 0;
}