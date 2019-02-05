#include<stdio.h>
#include<string.h>

int m = 0;

void calculate(char *str, int i, int n){
	if(i == n){
		m++;
	}
	else{
		for(int j=0;j<i;j++){
			calculate(str, i+1, n);
		}
	}
}

int main(){
	char str[]= "IoT";
	int len = strlen(str);
	calculate(str, 0, len-1);
	printf("%d",m);
}