#include <stdio.h>
#include <stdlib.h>
struct Array
{
    int n;
    int *A;
};

int main()
{
    int n, i = 0, m=0, m1=0;
    struct Array arr;
    double S=0, S1=0;
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Error");
        exit(0);
    }
    arr.A = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr.A[i]);
    }
    for (i=0;i<n;i++){
        if(arr.A[i]<0){
            S=S+arr.A[i];
            m++;
        }
    }
    for (i=0;i<n;i++){
        if(arr.A[i]>0){
            S1=S1+arr.A[i];
            m1++;
        }
    }
    if(m==0){
        printf("Mang khong co so am ");
        printf("%lf", S1);
    }
    else if(m1==0){
        printf("%lf ", S/m);
        printf("Mang khong co so duong");
    }
    else if (m<n&&m1<n)
    {
        printf("%lf ", S/m);
        printf("%lf", S1);
    }
    
}