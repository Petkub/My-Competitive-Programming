#include <stdio.h>
#include <stdlib.h>

typedef char* str;

int main()
{
    str s = malloc(10000 * sizeof(char));
    int i, is_lower, is_upper;

    i = is_lower = is_upper = 0;
    scanf("%s", s);
    while (*(s + i) != '\0')
    {
        if ( (*(s + i) >= 'A') && (*(s + i) <= 'B') )
        {
            is_upper = 1;
        }
        else if( (*(s + i) >= 'a') && (*(s + i) <= 'z') )
        {
            is_lower = 1;
        }
        i++;
    }

    if (is_upper && is_lower)
    {
        printf("Mix");
    }
    else if (is_upper && !(is_lower))
    {
        printf("All Capital Letter");
    }
    else
    {
        printf("All Small Letter");
    }

    return (0);
}