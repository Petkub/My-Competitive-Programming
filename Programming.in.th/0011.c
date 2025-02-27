#include <stdio.h>
#include <stdlib.h>

int main()
{
    size_t s = 42;
    int *num = (int *)calloc(s, sizeof(int));
    int n;
    int c = 0;

    int i = 0;
    for (;i < 10;)
    {
        scanf("%d", &n);
        num[n % 42]++;
        i++;
    }
    for (int i = 0; i < s; i++)
    {
        if (num[i] != 0)
        {
            c++;
        }
    }
    printf("%d", c);
    return (0);
}