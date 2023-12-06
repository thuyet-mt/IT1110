Bài 4.1 Viết chương trình
- Nhập vào số nguyên bất kỳ.
- Tính giai thừa của số nguyên đó.
Chú ý:
- Sử dụng vòng lặp for để giải quyết bài toán.
- Nếu dữ liệu đầu vào không đúng mô tả của đề bài, hiển thị ra màn hình
"ERROR"


Cách 1: lập trình thông thường (tuần tự/polling) các câu lệnh chạy từ trên xuống dưới
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (0 < a && a < 8)
    {   
        int i = 1, gt = 1;
        for (i = 1; i <= a; i++)
        {
            gt = gt * i;
        }
        printf("%d", gt);
    }
    else if (a == 0)
    {
        //giai thừa của 0 luôn là 1
        printf("1");
    }
    else
    {
        printf("ERROR");
    }
}
Cách 2: Lập trình hàm, mình sẽ tách phần tính giai thừa ra một phần riêng, để phục vụ cho bài toán chứa các biểu thức phức tạp, mà tính giai thừa là 1 yêu cầu nhỏ trong số đó.
        Khi sử dụng hàm, bài toán của bạn sẽ trở nên đơn giản hơn rất nhiều. 
    
#include <stdio.h>
int gt(int a)
{
    int i = 1, gt = 1;
    for (i = 1; i <= a; i++)
    {
        gt = gt * i;
    }
    return gt;
}
int main()
{
    int a;
    scanf("%d", &a);
    if (0 < a && a < 8)
    {
        printf("%d", gt(a));
    }
    else if (a == 0)
    {
        printf("1");
    }
    else
    {
        printf("ERROR");
    }
}
