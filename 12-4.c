#include <stdio.h>

void findMax(int num[], int size){
	int maxValue= num[0];
	for(int i=0; i<size; i++){
		if(num[i]>maxValue){
			maxValue=num[i];
		}
	}
	printf("Max: %d", maxValue);
}
int main(){
	int num[]={5,3,7,2,9,4};
	int size=sizeof(num)/sizeof(int);
	findMax(num, size);
	return 0;
}