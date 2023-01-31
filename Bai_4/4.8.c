#include<stdio.h>
#include<math.h>
int factorial(int a){
    int factorial = 1;
    for (int i =1;i<=a;i++){
        factorial = factorial * i;
    }
    return factorial;
}
int main(){
    double S=0, x;
    int n, i;
    
    
    scanf("%d", &n);
    scanf("%lf", &x);
    if(n<0){
        printf("Error");
        return 0;
    }
    for(i=0;i<=n;i++){
        S=S+pow(x, i)/factorial(i);
    }
    printf("%lf\n", S);
}