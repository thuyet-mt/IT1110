#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int giaiThua(int n)
{
    if (n == 1)
        return 1;
    return n * giaiThua(n - 1);
}

double element(double x, int n){
    if(n==0) return pow(x, n);
    else return pow(x, n)/giaiThua(n);
}
int main(){
    double S3=0, x;
    int n, i;
    
    scanf("%d", &n);
    scanf("%lf", &x);
    if(n<0){
        printf("Error");
        exit(0);
    }
    for(i=0;i<=n;i++){
        //S1=S1+element1(x, i);
        //S2=S2+element2(x, i);
        S3=S3+element(x, i);
    }
    //printf("%lf\n", S1);
    //printf("%lf\n", S2);
    printf("%lf\n", S3);
}

