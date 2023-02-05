Viết chương trình nhận vào một số tự nhiên n (n nằm trong khoảng biểu diễn của int)
- In ra số tự nhiên lớn nhất nhỏ hơn hoặc bằng n và là tích của hai số chẵn liên tiếp.
- In ra số tự nhiên lớn nhất nhỏ hơn hoặc bằng n và là số chính phương.
- Nếu phần nào không tồn tại số thỏa mãn, in ra ERROR.
- Nếu 2 phần đều không tồn tại số thỏa mãn hoặc n<0 sẽ in ra ERROR
- Ví dụ
Input:
53
Output:
48
49
Giải thích ví dụ: input: 53
- Output 1: 48(6*8=48<53, 8*10=80>53)
- Output 2: 49(7*7=49<53, 8*8=64>53)
    
#include <stdio.h>
int main(){
	int n, m = 0, m1 = 0;
	scanf("%d", &n);
	if(n<0){
		printf("ERROR");
		return 0;
	}
	for(int i = 0;i<=n;i++){
		if(i%2==0&&(i*(i+2)<=n)){
			m = i*(i+2);
		}
	}
	if(m==0){
		printf("ERROR\n");
	}
	else{
		printf("%d\n", m);
	}
	for(int i = 0;i<=n;i++){
		if((i*i<=n)){
			m1 = i*i;
		}
	}
	if(m1==0){
		printf("ERROR");
	}
	else{
		printf("%d", m1);
}
