#include <stdio.h>
#include <stdlib.h>

int main()
{
    size_t lenght;
    int pos = 1;
    char *ch = (char *)malloc((lenght + 1) * sizeof(char));
    scanf("%s", ch);

    while (*ch != '\0')
    {
        if (pos == 1)
        {
            if (*ch == 'A')
            {
                pos = 2;
            }
            else if (*ch == 'C')
            {
                pos = 3;
            }
        }
        else if (pos == 2)
        {
            if (*ch == 'A')
            {
                pos = 1;
            }
            else if (*ch == 'B')
            {
                pos = 3;
            }
        }
        else if (pos == 3)
        {
            if (*ch == 'B')
            {
                pos = 2;
            }
            else if (*ch == 'C')
            {
                pos = 1;
            }
        }
        ch++;
    }

    printf("%d", pos);

    return (0);
}