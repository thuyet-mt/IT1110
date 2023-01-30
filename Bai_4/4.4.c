Problem:
Đề bài:
Viết chương trình thực hiện các công việc sau:
- Nhập 2 số nguyên dương 𝑎, 𝑏 bất kỳ
- Tìm ước số chung lớn nhất và bội số chung nhỏ nhất của 2 số đó
- Hiển thị kết quả ra màn hình
Chú ý: Kiểm tra dữ liệu đầu vào của chương trình, nếu không đúng thì kết thúc chương trình và in ra màn hình ERROR.
Mô tả dữ liệu đầu vào:
    Số nguyên dương a
    Số nguyên dương b
Mô tả dữ liệu đầu ra:
    Ước số chung lớn nhất
    Bội số chung nhỏ nhất
    
For example:
    Dữ liệu đầu vào |	Kết quả
    1               |   1 
    2               |   2


//All in main function ver
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > 1000 || a < 0 || b > 1000 || b < 0)
    {
        printf("ERROR");
        return 0;
    }
    else{
        // UCLN
        int UCLN, max;
        if(a>b){
            max = a;
        }
        else max =b;
        for(int i =1;i<max;i++){
            if(a%i==0&&b%i==0){
                UCLN = i;
            }
        }
        printf("%d", UCLN);
        int BCNN;
        for(int j =a*b;j>1;j--){
            if(j%a==0&&j%b==0){
                BCNN = j;
            }
        }
        printf("\n%d", BCNN);
    }
    
}
// Module Programming ver
#include <stdio.h>
#include <stdlib.h>
int find_max(int a, int b)
{
    int max;
    if (a > b)
        max = a;
    else
        max = b;
    return max;
}
void BCNN(int a, int b)
{
    int i = 0;
    for (i = find_max(a, b); i <= (a * b); i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            printf("%d\n", i);
            break;
        }
    }
}
void UCLN(int a, int b)
{
    while (a * b != 0)
    {
        if (a > b)
        {
            a %= b; // a = a % b
        }
        else
        {
            b %= a;
        }
    }
    printf("%d\n", a + b);
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > 1000 || a < 0 || b > 1000 || b < 0)
    {
        printf("ERROR");
        exit(0);
    }
    UCLN(a, b);
    BCNN(a, b);
}
