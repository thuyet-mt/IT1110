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
            
Cách làm tuần tự không dùng hàm: 
#include<stdio.h>
#include<math.h>

int main(){
    double S = 0, x = 0;
    int n = 0, i = 0;
    double factorial = 1;  // Biến lưu giai thừa

    // Nhập giá trị của n và x
    scanf("%d", &n);
    scanf("%lf", &x);

    // Kiểm tra nếu n âm, in ra thông báo lỗi và kết thúc chương trình
    if (n < 0){
        printf("Error");
        return 0;
    }

    for (i = 0; i <= n; i++){
        if (i > 0) {
            // Tính giai thừa cho số i trong vòng lặp
            factorial *= i;
        }
        // Tính giá trị của chuỗi số học theo công thức
        S =S + pow(x, i) / factorial;
    }

    // In giá trị của S ra màn hình
    printf("%lf\n", S);

    return 0;
}
/*Chúng ta sử dụng biến factorial để tính giai thừa của mỗi số i trong vòng lặp. 
Mỗi khi i tăng lên, biến factorial sẽ nhân với i, tạo ra giai thừa mới cho số i.*/


Cách sử dụng hàm:
#include<stdio.h>
#include<math.h>

// Hàm này nhận vào một số nguyên aa và trả về giai thừa của aa. Nếu aa bằng 0, nó trả về 1.
int factorial(int a){
    int factorial = 1;
    if (a == 0){
        return 1;
    }
    else{
        for (int i =1;i<=a;i++){
            factorial = factorial * i;
        }
        return factorial;
    }
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


