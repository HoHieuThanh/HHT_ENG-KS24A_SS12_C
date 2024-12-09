#include <stdio.h>

int tong(){
	int a, b;
	printf("Nhap so a: ");
	scanf("%d", &a);
	printf("Nhap so b: ");
	scanf("%d", &b);
	int sum = a + b;
	printf("%d + %d = %d", a, b, sum);
	return sum;	
}
int main(){
	tong();
	return 0;
}