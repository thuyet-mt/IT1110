#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    float d;
    d = b * b - 4 * a * c;
    if (a == 0)
    {
        if ((b == 0) && (c == 0))
            printf("Phuong trinh vo so nghiem");
        else if ((b == 0) && (c != 0))
            printf("Phuong trinh vo nghiem");
        else
            printf("%lf", -c / b);
    }
    else
    {
        if (d == 0)
        {
            printf("%f", -b / (2 * a));
        }
        if (d > 0)
        {
            printf("%f\n", (-b + sqrt(d)) / (2 * a));
            printf("%f\n", (-b - sqrt(d)) / (2 * a));
        }
        if (d < 0)
        {
            printf("%f+%.2fi\n", (-b) / (2 * a), (float)sqrt(-d) / (2 * a));
            printf("%f-%.2fi\n", (-b) / (2 * a), (float)sqrt(-d) / (2 * a));
        }
        return 0;
    }
}