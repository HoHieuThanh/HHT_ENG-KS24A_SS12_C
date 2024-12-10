#include <stdio.h>

//1
void addArr(int j,int arr[100]){
	for(int i=0; i<j; i++){
		scanf("%d", &arr[i]);
	}
}

//2
void displayArr(int j,int arr[100]){
	for(int i=0; i<j; i++){
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}

//3
void addValue(int j, int arr[100], int index, int input){
	for(int i=j; i>index; i--){
		arr[i]=arr[i-1];
	}
	arr[index]=input;
}

//4
void changeValue(int arr[100], int index, int input){
	arr[index]=input;
}

//5
void deleteValue(int j, int arr[100], int index){
	for(int i=index; i<j; i++){
		arr[i-1]=arr[i];
	}
}

//6.a
void s_b(int n, int arr[100]){
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(arr[j] > arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
//6.b
void b_s(int n, int arr[100]){
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(arr[j] < arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}


int main() {
	char choice2;
    int choice, n, i, x;
    int arr[100];
    do {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. Them mot phan tu vao vi tri chi dinh\n");
        printf("4. Sua mot phan tu o vi tri chi dinh\n");
        printf("5. Xoa mot phan tu o vi tri chi dinh\n");
        printf("6. Sap xep cac phan tu\n");
        printf("7. Tim kiem phan tu nhap vao\n");
        printf("8. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);
        switch(choice){
        	case 1:
        		printf("Nhap so phan tu: ");
        		scanf("%d", &n);
        		printf("Nhap gia tri phan tu\n");
        		addArr(n,arr);
        		break;
        	case 2:
        		displayArr(n,arr);
        		break;
        	case 3:
        		printf("Nhap vi tri muon them: ");
        		scanf("%d", &i);
        		printf("Nhap gia tri muon them: ");
        		scanf("%d", &x);
        		addValue(n,arr,i,x);
        		n++;
        		break;
        	case 4:
        		printf("Nhap vi tri muon sua: ");
        		scanf("%d", &i);
        		printf("Nhap gia tri muon sua: ");
        		scanf("%d", &x);
        		changeValue(arr,i,x);
        		break;
        	case 5:
        		printf("Nhap vi tri muon sua: ");
        		scanf("%d", &i);
        		deleteValue(n,arr,i);
        		n--;
        		break;
        	case 6:
        		printf("a.Tang dan\n");
        		printf("b.Giam dan\n");
        		printf("Lua chon: ");
        		getchar();
        		choice2=getchar();
        		if(choice2=='a'){
        			s_b(n,arr);
				}else if(choice2=='b'){
					b_s(n,arr);
				}else{
					printf("Khong hop le");
				}
        		break;
        	case 7:
        		break;
        	case 8:
        		printf("Ket thuc chuong trinh");
        		break;
        	default:
        		printf("Khong hop le");
		}
	}while(choice!=8);
	
	return 0;
}