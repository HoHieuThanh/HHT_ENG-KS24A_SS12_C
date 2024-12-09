#include <stdio.h>
void arr(int num[], int size){
	for(int i=0; i<size; i++){
		printf("%d ", num[i]);
	}
}
int main(){
	int num[5]={1,2,3,4,5};
	arr(num, 5);
	return 0;
}