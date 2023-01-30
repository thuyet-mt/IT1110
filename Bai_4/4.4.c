//All in main function ver
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > 1000 || a < 0 || b > 1000 || b < 0)
    {
        printf("ERROR");
        return 0;
    }
    else{
        // UCLN
        int UCLN, max;
        if(a>b){
            max = a;
        }
        else max =b;
        for(int i =1;i<max;i++){
            if(a%i==0&&b%i==0){
                UCLN = i;
            }
        }
        printf("%d", UCLN);
        int BCNN;
        for(int j =a*b;j>1;j--){
            if(j%a==0&&j%b==0){
                BCNN = j;
            }
        }
        printf("\n%d", BCNN);
    }
    
}
// Module Programming ver
#include <stdio.h>
#include <stdlib.h>
int find_max(int a, int b)
{
    int max;
    if (a > b)
        max = a;
    else
        max = b;
    return max;
}
void BCNN(int a, int b)
{
    int i = 0;
    for (i = find_max(a, b); i <= (a * b); i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            printf("%d\n", i);
            break;
        }
    }
}
void UCLN(int a, int b)
{
    while (a * b != 0)
    {
        if (a > b)
        {
            a %= b; // a = a % b
        }
        else
        {
            b %= a;
        }
    }
    printf("%d\n", a + b);
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > 1000 || a < 0 || b > 1000 || b < 0)
    {
        printf("ERROR");
        exit(0);
    }
    UCLN(a, b);
    BCNN(a, b);
}
