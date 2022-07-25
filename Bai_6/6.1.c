#include <stdio.h>
#include <string.h>
int main()
{
    char s[100], s1[100];
    fflush(stdin); 
    /*Khi nhập xâu thì kết thúc bằng một ký tự xuống dòng ‘\n’. 
    Nhưng compiler vẫn nhận đây là một xâu cho tới bộ nhớ tạm thời và truyền nó vào biến xâu tiếp theo của chương trình.
    fflush(stdin); với mục đích xóa đi bộ nhớ tạm thời của chương trình để không tồn tại những giá trị rác như bên trên.*/
    fgets(s, sizeof(s), stdin); 
    fgets(s1, sizeof(s1), stdin);
    strcat(s, s1);
    int dem, n = strlen(s);
    for (int i = 'A'; i <= 'z'; i++){
        dem = 0;
        for (int j = 0; j < n; j++)
            if (s[j] == i)
                dem++;
        if (dem != 0){
            printf("%c", i);
        }         
    }
    printf("\n");
        for (int i = 'A'; i <= 'z'; i++){
        dem = 0;
        for (int j = 0; j < n; j++)
            if (s[j] == i)
                dem++;
        if (dem != 0){
            printf("%d\n", dem);
        }         
    }
    return 0;

}
