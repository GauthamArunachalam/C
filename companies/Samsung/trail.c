#include<stdio.h>
#include<stdlib.h>

struct Node{
	struct Node *next;
	int value;
}*node;

int main(){
	node = malloc(sizeof(struct Node));
	int a;
	printf("Enter a value");
	scanf("%d",&a);
	node->value = a;
	node->next = NULL;
	printf("fuck yea %d",node->value);
	return 1;
}