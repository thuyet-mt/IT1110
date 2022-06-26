#include<stdio.h>
int  main(){
    // input giá k thuế; thuế, cân nặng
    // output tổng giá trị sau thuế
    double gkt, th, cn; 
    scanf("%lf", &gkt);
    scanf("%lf", &cn);
    scanf("%lf", &th);
    printf("%lf", gkt*cn+(gkt*cn)*th/100);
}