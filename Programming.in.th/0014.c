#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n1, n2;
    int min, gcd = 1;

    scanf("%d%d", &n1, &n2);
    if (n1 < n2)
    {
        min = n1;
    }
    else
    {
        min = n2;
    }
    
    for (int i = min; i >= 2; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
            break;
        }
    }
    printf("%d", gcd);
    return (0);
}