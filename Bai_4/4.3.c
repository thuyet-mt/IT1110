 Lập chương trình thực hiện các công việc sau:
- Nhập một số nguyên dương bất kỳ nhỏ hơn 1000
- Tính tổng các chữ số của số đó. Ví dụ: số 123 có tổng các chữ số là 1+2+3=6.
- Thông báo kết quả ra màn hình.

Để làm được, cần nhớ 2 phép toán
1. a/b là phép chia lấy nguyên, ví dụ 5/3=1
2. a%b là phép chia lấy dư, ví dụ 5/3 = 2 
    
    Ý tưởng như sau: 
Ví dụ:  1)  Số 1234%10=4, vì 1234 chia 10 bằng 123 dư 4, như thế là ta đã lấy được chữ số cuối cùng (số 4) của 1234 bằng phép chia 1234%10, 
            ta lưu số này vào biến sotachra sau đó cộng vào tổng sum
        2)  Tiếp theo, làm thế nào để lấy ra số 3? Ta phải làm mất số 4 đi đã, tức là biến 1234 thành 123, 
            sử dụng phép 1234/10 ta sẽ được kết quả mong muốn 1234/10=123
        3)  Sau đó, số hiện tại (123) ta % cho 10, tức 123%10=3 ta lại lấy được số 3 (tương tự như cách lấy số 4 ở trên)
            Chia 123/10, ta sẽ vứt được số 3,....
            Cứ làm tương tự cho đến khi 1234 giảm về 0 là được
Cách 1: Tuần tự

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
        int sum=0, sotachra;
        while (a!=0)
        {
            sotachra= a%10;
            sum=sum+sotachra;
            a=a/10;
        }
        printf("%d", sum);
    }
    else{
        printf("ERROR");
    }
}

Cách 2: Lập trình hàm 

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
