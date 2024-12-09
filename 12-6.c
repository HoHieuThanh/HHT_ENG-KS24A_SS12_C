#include <stdio.h>

int perfect(int n) {
    if (n <= 0){
		return 1;
	}
	
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int num1, num2;
    printf("Nhap so thu 1: ");
    scanf("%d", &num1);
    if (perfect(num1)==num1) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }

    printf("Nhap so thu 2: ");
    scanf("%d", &num2);
    if (perfect(num2)==num2) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }

    return 0;
}
