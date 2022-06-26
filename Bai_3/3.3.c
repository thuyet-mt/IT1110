#include <stdio.h>
int main()
{
    double x, y, a, b, c;
    scanf("%lf", &x);
    scanf("%lf", &y);
    a = x * x + y * y;
    b = (x + y) * (x + y);
    c = (x - y) * (x - y);
    printf("%lf\n", a);
    printf("%lf\n", b);
    printf("%lf", c);
}