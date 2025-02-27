#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{  
    return (*(int*)a - *(int*)b);
}

int main()
{
    int num[3];
    char ch[4];

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &num[i]);
    }
    scanf("%s", ch);

    size_t arr_size = sizeof(num) / sizeof(num[0]);
    qsort(num, arr_size, sizeof(num[0]), compare);

    int i = -1;
    while (*(ch + ++i) != '\0')
    {
        if (*(ch + i) == 'A')
        {
            printf("%d ", num[0]);
        }
        else if (*(ch + i) == 'B')
        {
            printf("%d ", num[1]);
        }
        else if (*(ch + i) == 'C')
        {
            printf("%d ", num[2]);
        }
    }
    
    return (0);
}