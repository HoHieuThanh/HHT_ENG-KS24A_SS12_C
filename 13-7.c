#include <stdio.h>

void struc(int x, int y){
	int arr[x][y];
	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			scanf("%d", &arr[i][j]);
		}
		printf("-----\n");
	}
	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}
int main(){
	
	int n, m, arr[100][100];
	printf("Nhap vao so hang: ");
	scanf("%d", &n);
	printf("Nhap vao so cot: ");
	scanf("%d", &m);
	printf("Nhap gia tri:\n");
	struc(n,m);

	
	return 0;
}