#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char s[17], s1[17];
    fflush(stdin);
    fgets(s, sizeof(s), stdin);
    for(int i =0;i<strlen(s);i++){
        s1[strlen(s)-1-i]=s[i];
    }
    for(int i =strlen(s1);i>=strlen(s);i--){
        printf("%d", s[i]);
    }
}
