#include <stdio.h>
/*Petkub :)*/

int f_digit(int m, int x)
{
    int arr[100000];
    int c = 0;

    if (m == 0)
    {
        arr[c++] = 0;
    }
    else
    {
        while (m > 0)
        {
            arr[c++] = m % 10; //eg. 750 -> [0, 5, 7]
            m /= 10;
        }
    }
    if (x > c || x <= 0)
    {
        return (-1); // Not found.
    }

    return (arr[c - x]); //reverse
}

int main()
{
    int a, b, x, d;
    scanf("%d %d %d", &a, &b, &x);
    int m = a * b;

    d = f_digit(m, x);
    if (d != -1)
    {
        printf("%d", d);
    }
    else
    {
        printf("_");
    }
    return (0);
}
