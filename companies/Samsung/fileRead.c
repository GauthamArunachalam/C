#include<stdio.h>

int main(){

	int a;
	FILE *fileptr;

	fileptr = fopen("text.txt","r");

	fscanf(fileptr, "%d", &a);
	while(!feof(fileptr)){
		fscanf(fileptr, "%d", &a);
		printf("%d\n",a);
	}

	
	return 1;
}