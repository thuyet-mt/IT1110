Đề bài (Cảm ơn em Vũ Thị Thu Nga đã scan đề giúp mình):
Cho biểu thức xấp xỉ In(1+x) như bên dưới.
    ln (1+x) = x-x²/2+x³/3-x⁴/4+... +(-1)^(n-1).xⁿ/n
Biểu thức giới hạn bởi xⁿ/n<e với số e cho trước (với n là số nguyên, e là số thực).
Nhập vào số k và e. Tính ln(k) đến khi biểu thức bị giới hạn và in ra số nguyên n
Kiểm tra đầu vào thỏa mãn 0 < k <= 2,0 <e< 1 Nếu điều kiện sai thì in ra "Error"
Chú ý:
Mô tả giá trị đầu vào:
Số thực k
Số thực e
Mô tả giá trị đầu ra:
(Giá trị ln(k) chính xác với 7 số sau dấu phảy
Số nguyên n

Ví dụ:
Input: 2
0.1

Outpur: 0.6456349
10

 
#include <stdio.h>
#include <math.h>

int main(){
	double k =2, e=0.1, x, sum = 0;
	// scanf("%lf", &k);
	// scanf("%lf", &e);
	if (k <= 0 || k > 2 || e <= 0 || e >= 1) {
		printf("Error");
		return 0;
	}
	x=k-1;
	int i = 1;
	/*
	Biểu thức giới hạn bởi xⁿ/n<e , n càng to thì biểu thức pow(x,n)/n càng nhỏ
	Vì thế ta sẽ dùng điều kiện pow(x,i)/i >= e làm điều kiện dừng của vòng lặp
	Hoặc có thể dùng vòng while như sau:
	=======================================
	for(i = 1;pow(x,i)/i>=e;i++){
		sum = sum + pow(-1,i-1)*pow(x,i)/i;
	}
	=======================================
	*/
	while (pow(x,i)/i >= e){
		sum = sum + pow(-1,i-1)*pow(x,i)/i;
		i++;
	}
	printf("%.7lf\n", sum);
	printf("%d", i - 1);
	
}
/*
	Dòng 13:		i = 1  => trong while: pow(x,i)/i = pow(1,1)/1 = 1 	 >= e = 0.1, sum = 1	  , sau đó i++ = 2
				i = 2  => trong while: pow(x,i)/i = pow(1,2)/2 = 0.5 	 >= e = 0.1, sum = 0.5	  , sau đó i++ = 3
				i = 3  => trong while: pow(x,i)/i = pow(1,3)/3 = 0.33333 >= e = 0.1, sum = 0.83333, sau đó i++ = 4
				...
				i = 9  => trong while: pow(x,i)/i = pow(1,2)/2 = 0.11111 >= e = 0.1, sum = 0.63452, sau đó i++ = 10
				i = 10 => trong while: pow(x,i)/i = pow(1,2)/2 = 0.1 	 >= e = 0.1, sum = 0.64563, sau đó i++ = 11
	Đây là log ghi lại vòng while chạy mà mình debug (debug là gì bạn tự search google nhé)
	Nhìn log ta thấy tại i = 10 thì thoả mãn điều kiện của n (pow(x,n)/n >= e, n càng to thì biểu thức pow(x,n)/n càng nhỏ), 
	tuy nhiên kết thúc vòng while ta lại thấy i =11, vì thế ta sẽ in ra i -1 ở dòng 20
*/
 
