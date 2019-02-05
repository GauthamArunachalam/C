#include<stdio.h>

int m = 0;

void abc(char *s){
	if(s[0] == '\0'){
		return;
	}
	abc(s+1);
	abc(s+1);
	printf("%s %c\n",s,s[0]);
	m++;
}

int main(){
	abc("mysql");
	printf("\n\n%d",m);
	return 1;
}