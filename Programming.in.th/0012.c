#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *ch = (char *)malloc(16 * sizeof(char));
    scanf("%s", ch);

    size_t n = strlen(ch);
    int len = 4 * n + 1;
    char arr[5][len];

    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < len; j++)
        {
            arr[i][j] = '.';
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (i == 0 || i == 4)
        {
            for (int pos = 0; pos < n; pos++)
            {
                if (pos % 3 == 2)
                {
                    arr[i][2 + 4 * pos] = '*';
                }
                else
                {
                    arr[i][2 + 4 * pos] = '#';
                }
            }
        }
        else if (i == 1 || i == 3)
        {
            for (int pos = 0; pos < 2 * n; pos++)
            {
                if (pos % 6 == 4 || pos % 6 == 5)
                {
                    arr[i][1 + 2 * pos] = '*';
                }
                else
                {
                    arr[i][1 + 2 * pos] = '#';
                }
            }
        }
        else if (i == 2)
        {
            for (int pos = 0; pos <= 2 * n; pos++)
            {
                if (pos % 6 == 4 || pos % 6 == 0)
                {
                    arr[i][2 * pos] = '*';
                }
                else
                {
                    if (pos % 2 == 1)
                    {
                        arr[i][2 * pos] = ch[pos / 2];
                    } else
                    {
                        arr[i][2 * pos] = '#';
                    }
                }
            }
        }
    }

    arr[2][0] = '#';
    if (n % 3 == 2)
    {
        arr[2][len - 1] = '#';
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < len; j++)
        {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }
    free(ch);

    return (0);
}
