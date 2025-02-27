#include <stdio.h>

int main()
{
    unsigned int s1, s2, s3, t_s = 0;
    
    scanf("%u%u%u", &s1, &s2, &s3);
    t_s = s1 + s2 + s3;
    
    if (t_s >= 80 && t_s <= 100)
    {
        printf("A");
    }
    else if (t_s >= 75 && t_s <= 79)
    {
        printf("B+");
    }
    else if (t_s >= 70 && t_s <= 74)
    {
        printf("B");
    }
    else if (t_s >= 65 && t_s <= 69)
    {
        printf("C+");
    }
    else if (t_s >= 60 && t_s <= 64)
    {
        printf("C");
    }
    else if (t_s >= 55 && t_s <= 59)
    {
        printf("D+");
    }
    else if (t_s >= 50 && t_s <= 54)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }

    return (0);
}