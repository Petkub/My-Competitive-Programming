#include <stdio.h>

int main()
{
    int size = 9;
    int dw[size];
    int sum = 0;
    int x1, x2;

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &dw[i]);
        sum += dw[i];
    }

    int u = sum - 100;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (dw[i] + dw[j] == u)
            {
                x1 = i;
                x2 = j;
                break;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (i == x1 || i == x2)
        {
            continue;
        }
        printf("%d\n", dw[i]);
    }

    return (0);
}