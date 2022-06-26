#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159
int main()
{
    double r;
    scanf("%lf", &r);
    if (r > 0)
    {
        printf("%lf\n", 2 * pi * r);
        printf("%lf", r * pi * r);
    }
    else
    {
        printf("ERROR");
    }
}