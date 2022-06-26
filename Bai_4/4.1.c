#include <stdio.h>
int gt(int a)
{
    int i = 1, gt = 1;
    for (i = 1; i <= a; i++)
    {
        gt = gt * i;
    }
    return gt;
}
int main()
{
    int a;
    scanf("%d", &a);
    if (0 < a && a < 8)
    {
        printf("%d", gt(a));
    }
    else if (a == 0)
    {
        printf("1");
    }
    else
    {
        printf("ERROR");
    }
}