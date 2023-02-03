Đề bài:
Nhập mảng n số nguyên từ bàn phím, in ra màn hình các giá trị từ cuối đến giá trị đầu, sau đó tính tổng các phần tử của mảng.
Chú ý:
Nếu n <= 0 in "Error"

    Mô tả giá trị đầu vào:
Dòng đầu tiên chứa số nguyên dương n và là độ dài của mảng đầu vào.
Dòng thứ hai chứa n số nguyên.

    Mô tả giá trị đầu ra:
Dòng đầu tiên là các phần tử của mảng được in theo thứ tự đảo ngược.
Dòng đầu ra thứ hai là tổng các phần tử của mảng

For example:

Dữ liệu đầu vào	    |Kết quả
5                   |5 4 3 2 1
1 2 3 4 5           |15

Cách 1: Vì khai báo mảng bắt buộc phải khai báo số phần tử của mảng trước, nhưng ở đây số phần tử mảng ở đề bài lại là n, vì thế ta có thể dùng define 1 giá trị lớn cho n
#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

int main()
{
    int n, i = 0;
    /* parameter(các tham số trong hàm): 
    A: mảng chứa số phần tử được người dùng nhập vào
    B: mảng phụ để lưu số phần tử đảo ngược của mảng A
    n: số phần tử mảng người dùng nhập vào
    */
    int A[MAX], B[MAX];
    scanf("%d", &n);
    if (n < 0){
        printf("Error");
        return 0;
    }
    // Nhập các phần tử của mảng A
    for (i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    //đảo ngược mảng A, ví dụ n=4 thì B[0]=A[4-1-0]=A[3], tức phần tử đầu của B bằng phần tử cuối của A
    for(i=0;i<=n-1;i++){
        B[i]=A[n-1-i];
    }
    // các phần tử của mảng A được in theo thứ tự đảo ngược, tức là các phần tử của mảng B
    for(i=0;i<n;i++){
        printf("%d ", B[i]);
    }
    // in tổng các phần tử của mảng
    int S=0;
    for(i=0;i<n;i++){
        S=S+A[i];
    }
    printf("\n%d", S);
}
Cách 2: Sử dụng hàm malloc trong C, cấp phát bộ nhớ cho mảng bằng hàm này, xem trên google để hiểu rõ hơn.

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n, i = 0;
    int *A, *B;
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Error");
        return 0;
    }
    A = (int*)malloc(n * sizeof(int));
    B = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    
    for(i=0;i<=n-1;i++){
        B[i]=A[n-1-i];
    }
    for(i=0;i<n;i++){
        printf("%d ", B[i]);
    }
    int S=0;
    for(i=0;i<n;i++){
        S=S+A[i];
    }
    printf("\n%d", S);
    free(A);
    free(B);
}
