#include <stdio.h>
#include <math.h>


int main()
{
    unsigned int r;
    double texi_a, geo_a;
    long double pi = 3.14159265358979323846264338327950288;

    scanf("%u", &r);
    texi_a = 2 * r * r;
    geo_a = pi * (r * r);

    printf("%.6lf\n", geo_a);
    printf("%.6lf", texi_a);

    return (0);
}