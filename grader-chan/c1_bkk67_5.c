/*
    c1_bkk67_5
*/
#include<stdio.h>
#include<string.h>

int main()
{
    char arr[17];
    scanf("%s",arr);
    int n=strlen(arr);
    int mul=1;
    int tot=0;
    for(int i=n-2;i>=0;i--)
    {   
        int num=arr[i]-'0';
        if(mul) num*=2;
        if(num > 9)
        {
            tot+=num%10;
            tot+=num/10;
        }
        else {tot+=num;}
        mul = !mul;
    }
    int correct = ((10-(tot%10))%10) == (arr[n-1]-'0');
    if(correct) printf("yes");
    else printf("no");
    return 0;
}