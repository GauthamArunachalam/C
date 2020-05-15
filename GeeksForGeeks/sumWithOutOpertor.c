#include<stdio.h>

int add(int a,int b){
	return printf("%*c%*c",a,'\r',b,'\r');
}

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("Sum = %d",add(a,b));
	return 0;
}