#include <stdio.h>
#include <stdlib.h>
main()
{
    int a, b, c, tong;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    tong = a + b + c;
    printf("%d\n", tong);
    printf("%lf", ((double)tong / 3));
}