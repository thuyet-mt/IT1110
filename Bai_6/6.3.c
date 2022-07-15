#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str[100];
    // getchar();
    int count_num = 0, count_character = 0;
    fgets(str, sizeof(str), stdin);
    size_t i = 0; 
    // Tại sao dùng size_t thay vì char ở đây?
    // nếu để char, ta sẽ nhận được cảnh báo sau từ gcc:
    // error: array subscript has type ‘char’ [-Werror=char-subscripts]
    // vì char là một kiểu dữ liệu được gán là signed trong một số compiler. 
    // Vì thế để an toàn ta sẽ dùng size_t
    for (i = 0; i < strlen(str); i++)
    {
        if ('0' <= str[i] && str[i] <= '9')
        {
            count_num++;
        }
        else if (('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i] && str[i] <= 'Z'))
        {
            count_character++;
        }
    }
    if (count_num == count_character)
    {
        printf("0");
    }
    if (count_num > count_character)
    {
        printf("2");
    }
    if (count_num < count_character)
    {
        printf("1");
    }
}