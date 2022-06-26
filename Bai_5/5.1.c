#include <stdio.h>
#include <stdlib.h>
struct Array
{
    int n;
    int *A;
};

int main()
{
    int n, i = 0;
    struct Array arr, brr;
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Error");
        exit(0);
    }
    arr.A = (int*)malloc(n * sizeof(int));
    brr.A = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr.A[i]);
    }
    
    for(i=0;i<=n-1;i++){
        brr.A[i]=arr.A[n-1-i];
    }
    for(i=0;i<n;i++){
        printf("%d ", brr.A[i]);
    }
    int S=0;
    for(i=0;i<n;i++){
        S=S+arr.A[i];
    }
    printf("\n%d", S);
}