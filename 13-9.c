#include <stdio.h>

//1.
void addArr(int x ,int y, int arr[100][100]){
	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			scanf("%d", &arr[i][j]);
		}
		printf("-----\n");
	}
}

//2.
void displayArr(int x, int y, int arr[100][100]){
	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}

//3.
void displayCorner(int x, int y, int arr[100][100]){
	printf("%d\t%d\n%d\t%d\n", arr[0][0], arr[0][y-1], arr[x-1][0], arr[x-1][y-1]);
}

//4.
void displayBorder(int x, int y, int arr[100][100]){
	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			if(i==0 || i==x-1 || j==0 || j==y-1){
				printf("%d\t", arr[i][j]);
			}else{
				printf("\t");
			}
		}
		printf("\n");
	}
}

//5.
void displayDiagonal(int x, int y, int arr[100][100]){
	printf("Duong cheo chinh:\n");
	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			if(i==j){
				printf("%d\t", arr[i][j]);
			}else{
				printf("\t");
			}
		}
		printf("\n");
		
	}
	printf("Duong cheo phu:\n");
	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			if(j==x-1-i){
				printf("%d\t", arr[i][j]);
			}else{
				printf("\t");
			}
		}
		printf("\n");
		
	}
}

//6.
void displayPrime(int x, int y, int arr[100][100]){
	int count;
	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			count=0;
			for(int f=2; f<=arr[i][j]; f++){
				if(arr[i][j]%f==0){
					count++;
				}
			}
			if(count==1){
				printf("%d\t", arr[i][j]);
			}else{
				printf("\t");
			}
		}
		printf("\n");
	}
}

int main(){
	int choice, n, m;
	int arr[100][100];
	do{
		printf("\nMENU\n");
		printf("1.Nhap gia tri\n");
		printf("2.In ma tran\n");
		printf("3.In ra cac gia tri o goc\n");
		printf("4.In ra cac phan tu tren bien\n");
		printf("5.In ra cac phan tu tren duong cheo chinh va duong cheo phu\n");
		printf("6.In ra cac phan tu la so nguyen to\n");
		printf("7.Thoat\n");
		printf("Lua chon: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				printf("Hang: ");
				scanf("%d",&n);
				printf("Cot: ");
				scanf("%d",&m);
				printf("Nhap gia tri\n");
				addArr(n,m,arr);
				break;
			case 2:
				displayArr(n,m,arr);
				break;
			case 3:
				displayCorner(n,m,arr);
				break;
			case 4:
				displayBorder(n,m,arr);
				break;
			case 5:
				displayDiagonal(n,m,arr);
				break;
			case 6:
				displayPrime(n,m,arr);
				break;
			case 7:
				printf("Ket thuc chuong trinh");
				break;
			default:
				printf("Khong hop le\n");
		}
	}while(choice!=7);
	return 0; 
}