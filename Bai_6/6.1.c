#include <stdio.h>
#include <string.h>
int main()
{
    char s[100], s1[100];
    fflush(stdin); // thật ra mình cũng k hiểu cái lệnh này để làm gì
    fgets(s, sizeof(s), stdin); //dùng cái này t
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