Số nguyên tố là một số nguyên dương chỉ chia hết cho 1 và chính nó. Viết
chương trình nhập một số nguyên từ bàn phím, kiểm tra xem số nguyên đó có
phải là số nguyên tố hay không và thông báo ra màn hình.
    
    
Mình khai báo 1 biến count để lưu ước của N, mặc định count = 2 vì 1 số bất kỳ luôn có ít nhất 2 ước là 1 và chính nó    
Ý tưởng đơn giản của bài toán chỉ là cho 1 vòng lặp for chạy từ 2 đến N-1 để xem N có chia hết số nào trong cái đoạn [2;N-1] đó hay không
Nếu trong cái đoạn [2;N-1] mà có số xxx nào đó mà N chia hết cho xxx thì mình sẽ cập nhật giá trị biến count lên 1 đơn vị (câu lệnh count++)
Sau đó kiểm tra count, nếu count >2 thì rõ ràng số đó không là số nguyên tố    
Tối ưu hơn là chạy từ 2 đến sqrt(N), vì một số lí do toán học nên mình lười giải thích, các bạn xem tại đây nhé :))
    https://www.facebook.com/groups/518282464857050/?multi_permalinks=4291383894213536&ref=share

Còn rất rất nhiều cách để giải quyết tối ưu bài toán này, tuy nhiên mình vẫn theo cái này vì với mình nó dễ nhớ, dễ hiểu, dễ giải thích
Cách 1: Lập trình tuần tự

#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a == 2){
        printf("La so nguyen to");
    }
    else if (a < 2 || a%2 == 0){  //mình loại những số <2 và chia hết cho 2
        printf("Khong phai so nguyen to");
    }
    else if (a > 2 && a%2 != 0 ){ //Những số >2 và k chia hết cho 2
        int i, count=2;
        for (i = 2; i <= sqrt(a); i++){
            if (a % i == 0){
                count++;
            }
        }
        if(count==2){
            printf("La so nguyen to");
        }
        else{
            printf("Khong phai so nguyen to");
        }
    }
}
Cách 2: Lập trình hàm, cách này sẽ hữu dụng trong các bài toán kiểu như: tính tổng các số nguyên tố chẳng hạn, là sự kết hợp giữa tính tổng và kiểm tra số nguyên tố
        Nếu dùng hàm check số nguyên tố thì bài toán trở nên rất đơn giản.
#include <stdio.h>
#include <math.h>
void snt(int a)
{
    if (a == 2){
        printf("La so nguyen to");
    }
    else if (a < 2 || a%2 != 0){
        printf("Khong phai so nguyen to");
    }
    else if (a > 2 && a%2 != 0 ){ //Thật ra đoạn này để else thôi cũng được
        int i, count=2;
        for (i = 2; i <= sqrt(a); i++){
            if (a % i == 0){
                count++;
            }
        }
        if(count==2){
            printf("La so nguyen to");
        }
        else{
            printf("Khong phai so nguyen to");
        }
    }

    
}
int main()
{
    int a;
    scanf("%d", &a);
    snt(a); // như này thì chưa ứng dụng được vào bài toán khác, mình có cách 3 để biến nó thành 1 module 
}

Cách 3: Mình chỉ thay đổi hàm void thành hàm int. tức là nó trả về 1 giá trị int, ở đây mình quy định bằng define, true là 1, false là 0
        Nếu trả về true (1) thì nó là snt, false (0) thì nó k là số nguyên tố
        Như thế thì việc kiểm tra số nguyên tố chỉ cần dùng if else là xong

#include <stdio.h>
#include <math.h>
#define TRUE 1
#define FALSE 0

int snt(int a)
{
    if (a == 2){
        return TRUE;
    }
    else if (a < 2||a%2==0){
        return FALSE;
    }
    else if (a > 2 && a%2 != 0){ 
        int i, count=2;
        for (i = 2; i <= sqrt(a); i++){
            if (a % i == 0){
                count++;
            }
        }
        if(count==2){
            return TRUE;
        }
        else{
            return FALSE;
        }
    }

    
}
int main()
{
    int a;
    scanf("%d", &a);
    if(snt(a)==TRUE){
        printf("La so nguyen to");
    }
    else if (snt(a)==FALSE){
        printf("Khong phai so nguyen to");
    }
}





