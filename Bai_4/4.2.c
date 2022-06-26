#include <stdio.h>
#include <math.h>
void snt(int a)
{
    int i, count=0;
    for (i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            count++;
        }
    }
    if(count==0){
        printf("La so nguyen to");
    }
    else{
        printf("Khong phai so nguyen to");
    }
}
int main()
{
    int a;
    scanf("%d", &a);
    if (a == 2)
    {
        printf("La so nguyen to");
    }
    else if (a > 2)
    {
        snt(a);
    }
    else if (a < 2)
    {
        printf("Khong phai so nguyen to");
    }
}