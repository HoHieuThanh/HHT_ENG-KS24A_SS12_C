#include <stdio.h>

long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    printf("Nhap 1 so nguyen duong: ");
    scanf("%d", &num);
	printf("Giai thua cua %d la: %lld\n", num, factorial(num));

    return 0;
}
