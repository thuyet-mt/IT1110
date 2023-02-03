Đề bài:
Nhập mảng số nguyên từ bàn phím. Tính trung bình cộng các số âm, tổng các số dương và đưa kết quả ra màn hình.
Mô tả giá trị đầu vào:
- Dòng đầu tiên cho biết số phần tử mảng 𝑛.
- Dòng thứ 2 chứa giá trị của n phần tử mảng, các phần tử cách nhau một dấu cách.

Mô tả giá trị đầu ra:
Một dòng gồm 2 giá trị cách nhau 1 dấu cách:
- Giá trị trung bình cộng các số âm. nếu mảng chỉ toàn số âm, in ra màn hình Mảng không có số dương.
- Tổng các số dương, nếu mảng chỉ toàn số dương in ra màn hình Mảng không có số âm.

For example:
|===================|=================================|
|Dữ liệu đầu vào    |Kết quả                          |
|===================|=================================|
|2                  |-492.000000 295.000000           |
|295 -492           |                                 |
|===================|=================================|
|5                  |Mang khong co so am 15.000000    |
|1 2 3 4 5          |                                 |
|===================|=================================|
|2                  |-1.000000 Mang khong co so duong |
|-1 -1              |                                 |
|===================|=================================|

Có thể làm theo cách define ở bài 1, tuy nhiên mình thích dùng malloc hơn :D 
    
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n, i = 0, m=0, m1=0;
    int *A;
    double S=0, S1=0;
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Error");
        exit(0);
    }
    A = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    // Tính tổng các phần tử < 0
    for (i=0;i<n;i++){
        if(A[i]<0){
            S=S+A[i];
            m++; // cứ có 1 phần tử < 0 thì m sẽ tăng lên 1 đơn vị, tức là có bao nhiêu phần tử < 0 thì m sẽ bằng bấy nhiêu
        }
    }
    // Tính tổng các phần tử > 0
    for (i=0;i<n;i++){
        if(A[i]>0){
            S1=S1+A[i];
            m1++; // tương tự m
        }
    }
    
    if(m==0){
        printf("Mang khong co so am ");
        printf("%lf", S1);
    }
    else if(m1==0){
        printf("%lf ", S/m);
        printf("Mang khong co so duong");
    }
    else if (m<n&&m1<n)
    {
        printf("%lf ", S/m);
        printf("%lf", S1);
    }
    free(A);
}
