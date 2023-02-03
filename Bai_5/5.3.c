Đề bài:
Nhập mảng 𝑛 số nguyên bất kỳ từ bàn phím. Sắp xếp dãy số theo thứ tự tăng dần và đưa kết quả ra màn hình (Mỗi phần tử cách nhau một dấu cách).
Mô tả giá trị đầu vào:
- Dòng đầu tiên cho biết số phần tử mảng 𝑛.
- Dòng thứ 2 chứa giá trị của 𝑛 phần tử mảng, mỗi phần tử cách nhau một dấu cách.
Mô tả giá trị đầu ra:
Các phần tử in ra thành 1 dòng, cách nhau 1 dấu cách. 
For example:
Dữ liệu đầu vào	    |Kết quả
5                   |1 2 3 4 5
1 4 3 5 2           |
    
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n, i = 0, j=0, temp=0;
    int *A;
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Error");
        return 0;
    }
    A = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){ // tại sao lại có -i? 
        //vì sau mỗi lần lặp, số cặp cần so sánh lại giảm đi 1, do phần tử cuối cùng đã nằm đúng vị trí
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
}
