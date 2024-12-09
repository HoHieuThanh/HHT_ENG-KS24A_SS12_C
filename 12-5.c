#include <stdio.h>

void check(int num){
	int count=0;
	for(int i=2; i<=num; i++){
		if(num%i==0){
			count++;
		}
	}
	if(count==1){
		printf("TRUE\n");
	}else{
		printf("FALSE\n");
	}
}
int main(){
	int num1, num2;
	printf("Nhap vao so nguyen to\nNhap vao so thu 1: ");
	scanf("%d", &num1);
	check(num1);
	printf("Nhap vao so thu 2: ");
	scanf("%d", &num2);
	check(num2);
	return 0;
}