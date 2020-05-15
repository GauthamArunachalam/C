#include<stdio.h>

void arrPrint(int *arr){
	printf("\n%d",&arr);
}

int main(){
	int arr[]={1,2,3};
	printf("%d",arr);
	arrPrint(arr);	
}