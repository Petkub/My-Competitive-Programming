#include <stdio.h>
#include <math.h>

int main()
{
    double a, b;
    
    a = b = 0.0;
    scanf("%lf%lf", &a, &b);
    a *= a;
    b *= b;
    printf("%.6lf", sqrt(a + b));

    return (0);
}