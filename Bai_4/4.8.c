Đề bài:
Viết chương trình tính các tổng sau: 
    S=1+x/1!+x^2/2!+x^3/3!+⋯+x^n/n!
Trong đó n là một số nguyên dương và x là một số thực bất kỳ được nhập từ bàn phím khi chạy chương trình. 
Chú ý: Kiểm tra dữ liệu đầu vào của chương trình, nếu không đúng thì kết thúc chương trình và in ra màn hình Error.

Mô tả dữ liệu đầu vào:
    Số nguyên dương n
    Số thực x

Mô tả dữ liệu đầu ra:
    Giá trị của S

For example:
            Dữ liệu đầu vào	| Kết quả
            1                   | 2.500000
            1.5                 |
            


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
