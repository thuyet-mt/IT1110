#include<stdio.h>
int tongchuso(int a){
    int sum=0, sotachra;
    while (a!=0)
    {
        sotachra= a%10;
        sum=sum+sotachra;
        a=a/10;
    }
    return sum;
}
int main(){
    int a;
    scanf("%d", &a);
    if(0<=a && a<1000){
        printf("%d", tongchuso(a));
    }
    else{
        printf("ERROR");
    }
}
