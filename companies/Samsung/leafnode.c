#include<stdio.h>
#include<stdlib.h>

int leafCount = 0;

struct Node{
	struct Node *left, *right;
	int value;
}*root;

struct linkedList{
	struct Node *nod;
	struct linkedList *next;
}*front,*rear;

void leafNodeCount(struct Node *r){
	if(r != NULL){
		if(r->left == NULL && r->right == NULL){
			leafCount++;
		}
		leafNodeCount(r->left);
		leafNodeCount(r->right);
	}
}

void pushQueue(struct Node *node){
	if(front==NULL && rear==NULL){
		struct linkedList *temp = malloc(sizeof(struct linkedList));
		temp->next = NULL;
		temp->nod = node;
		front = rear = temp;
	}else{
		struct linkedList *temp = malloc(sizeof(struct linkedList));
		temp->next = NULL;
		temp->nod = node;
		rear->next = temp;
		rear = rear->next;
	}	
}

void inorder(struct Node *r){
	if(r != NULL){
		inorder(r->left);
		printf("%d\n",r->value);
		inorder(r->right);
	}
}

struct Node* newNode(int val){
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	temp->left = temp->right = NULL;
	temp->value = val;
	pushQueue(temp);
	return temp;
}

void insert(struct Node *new){
	if(root == NULL){
		root = new;
	}
	else{
		if(front->nod->left == NULL){
			front->nod->left = new;
			//printf("%d inserted left to %d",new->value,front->nod->value);
		}
		else if(front->nod->right == NULL){
			front->nod->right = new;
			//printf("%d inserted right to %d",new->value,front->nod->value);
			struct linkedList *ll = front;
			front = front->next;
			free(ll);
		}
	}	
}

int main(){
	int n,a;
	printf("Enter number of nodes");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("Enter node %d: ",i);
		scanf("%d",&a);
		insert(newNode(a));
	}
			
	leafNodeCount(root);
	printf("Count of leaf Nodes is %d",leafCount);
	return 1;
}