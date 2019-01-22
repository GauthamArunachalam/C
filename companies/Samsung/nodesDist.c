#include<stdio.h>
#include<stdlib.h>

struct Node{
	struct Node *left, *right;
	int value;
}

struct Node* newNode(int val){
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	temp->left = temp->right
}

int main(){
	int n,a;
	printf("Enter number of nodes: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("Enter Node %d: ",i);
		scanf("%d",&a);
		newNode(a);
	}
}
