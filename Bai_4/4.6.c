Viết chương trình tính các tổng sau: 
    S=1+x+x2+x3+⋯+xn
Trong đó n là một số nguyên dương và x là một số thực bất kỳ được nhập từ bàn phím khi chạy chương trình. 
Chú ý: Kiểm tra dữ liệu đầu vào của chương trình, nếu không đúng thì kết thúc chương trình và in ra màn hình Error.
Mô tả dữ liệu đầu vào:
Số nguyên dương n
Số thực x

Mô tả dữ liệu đầu ra:
Giá trị của S

For example:
    Dữ liệu đầu vào	|Kết quả
    1                   |2.500000
    1.5                 |

// All in main prog
#include<stdio.h>
#include<math.h>

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
        S=S+pow(x, i);
    }
    printf("%lf\n", S);
}


//Module Prog
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

