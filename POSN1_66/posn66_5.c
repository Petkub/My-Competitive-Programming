#include <stdio.h>
#include <string.h>
/* Petkub ;-; */

int main()
{
    char w[21];
    int c[256] = {0}; //ascii

    scanf("%s", w);

    for (int i = 0; i < strlen(w); i++)
    {
        c[(unsigned char)w[i]]++;
    }

    for (int i = 'A'; i <= 'Z'; i++)
    {
        if (c[i] == 1)
        {
            printf("%c\n", (char)i);
            break;
        }
    }

    return (0);
}
