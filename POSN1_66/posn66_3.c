#include <stdio.h>
#include <string.h>
/* Petkub @-@ */

int main()
{
    char input[7];
    int die[3];
    char p[5][4] =
    {
        "   ",
        "*  ",
        " * ",
        "  *",
        "* *"
    };

    scanf("%s", input);
    int c = 0;
    for (int i = 0; i < strlen(input); i++)
    {
        if (input[i] == '-')
        {
            i++;
            die[c++] = -(input[i] - '0'); //negative
        }
        else
        {
            die[c++] = input[i] - '0'; //char -> int
        }
    }

    for (int row = 0; row < 3; row++)
    {
        for (int d = 0; d < 3; d++)
        {
            int num = die[d];
            if (num == 1)
            {
                if (row == 1)
                {
                    printf(" * ");
                }
                else
                {
                    printf("   ");
                }
            }
            else if (num == 2)
            {
                if (row == 0)
                {
                    printf("%s", p[2]);
                }
                else if (row == 2)
                {
                    printf("%s", p[2]);
                }
                else
                {
                    printf("%s", p[0]);
                }
            }
            else if (num == 3)
            {
                if (row == 0)
                {
                    printf("%s", p[1]);
                }
                else if (row == 1)
                {
                    printf("%s", p[2]);
                }
                else
                {
                    printf("%s", p[3]);
                }
            }
            else if (num == 4)
            {
                if (row == 0 || row == 2)
                {
                    printf("%s", p[4]);
                }
                else
                {
                    printf("%s", p[0]);
                }
            }
            else if (num == 5)
            {
                if (row == 0 || row == 2)
                {
                    printf("%s", p[4]);
                }
                else
                {
                    printf("%s", p[2]);
                }
            }
            else if (num == 6)
            {
                if (row == 0 || row == 2)
                {
                    printf("%s", p[4]);
                }
                else
                {
                    printf("%s", p[4]);
                }
            }
            else if (num < 1 || num > 6)
            {
                if (row == 2)
                {
                    printf("___");
                }
                else
                {
                    printf("   ");
                }
            }
            printf(" ");
        }
        printf("\n");
    }

    return (0);
}
