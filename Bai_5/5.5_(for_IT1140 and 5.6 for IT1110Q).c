Đề bài: 
Viết chương trình đọc hai chuỗi S và T. Đếm số lần mỗi ký tự xuất hiện trong cả hai chuỗi.
Chú ý:
Đầu tiên xuất một chuỗi các ký tự riêng biệt trong cả hai chuỗi. Sau đó, đối với mỗi ký tự đó hiển thị ra số lần xuất hiện trong cả hai chuỗi
Mô tả giá trị đầu vào:
Chuỗi S
Chuỗi T
Mô tả giá trị đầu ra:
Một chuỗi các ký tự riêng biệt xuất hiện trong S hoặc T. (Sắp xếp các ký tự này theo thứ tự tăng dần theo giá trị ASCII của chúng).
Trên mỗi dòng là số lần xuất hiện của một ký tự (theo thứ tự trong chuỗi trên dòng 1).
For example:
Dữ liệu đầu vào	|Kết quả
b               |ab
a               |1
                |1


#include <stdio.h>
#include <string.h>
int main()
{
    char s[100], s1[100];
    scanf("%s", s);
    scanf("%s", s1);
    strcat(s, s1);
    int dem, n = strlen(s);
    for (int i = 'A'; i <= 'z'; i++)
    {
        dem = 0;
        for (int j = 0; j < n; j++){
            //nếu có phần tử nào trong chuỗi s bằng với phần tử nào từ A đến z trong bảng mã ASCII thì biến dem tăng lên 1, chỉ cần dem khác 0 thì tức là kí tự đó có xuất hiện.
            if (s[j] == i)
                dem++;
        }
        if (dem != 0)
        {
            printf("%c", i);
        }
    }
    printf("\n");
    for (int i = 'A'; i <= 'z'; i++)
    {
        dem = 0;
        for (int j = 0; j < n; j++)
        //nếu có phần tử nào trong chuỗi s bằng với phần tử nào từ A đến z trong bảng mã ASCII thì biến dem tăng lên 1, ký tự đó xuất hiện bao nhiêu lần thì giá trị của dem tăng lên bấy nhiêu.
            if (s[j] == i)
                dem++;
        if (dem != 0)
        {
            printf("%d\n", dem);
        }
    }
    return 0;
}
