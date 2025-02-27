#include <stdio.h>
/*Petkub :)*/

void h2b(int hex)
{
    int arr[16];
    int c = 0;
    if (hex == 0)
    {
        arr[c++] = 0;
    }
    else
    {
        while (hex > 0)
        {
            arr[c++] = hex % 2;
            hex /= 2;
        }
    }
    for (int i = c - 1; i >= 0; i--)
    {
        printf("%d", arr[i]); //n - 1 to 0.
    }
}
int main()
{
    unsigned int hex;
    scanf("%x", &hex); //hex -> dec (unsigned int hex)
    h2b(hex);    
    printf("\n%o", hex);

    return (0);
}