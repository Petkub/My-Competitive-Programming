#include <stdio.h>
#include <limits.h>

int main()
{
    unsigned int n;
    int max = INT_MIN;
    int min = INT_MAX;
    int c;

    scanf("%u", &n);
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &c);
        if (c > max)
        {
            max = c;
        }
        if (c < min)
        {
            min = c;
        }
    }
    printf("%d\n%d", min, max);

    return (0);
}