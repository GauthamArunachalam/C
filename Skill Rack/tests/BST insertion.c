#include<stdio.h>
struct Node{
    int value;
    struct Node *leftChild,*rightChild;
};
void inorder(struct Node *root);
void insert(struct Node* root, struct Node* newNode);
struct Node *root =NULL;
int leafCount=0,height=0,temp=0;
int main(){
    int n,ctr=1;
    scanf("%d",&n);

    root = malloc(sizeof *root);
    root->leftChild=root->rightChild=NULL;
    scanf("%d",&root->value);
    ctr++;
    while(ctr<=n){
        struct Node *newNode = malloc(sizeof *newNode);
        newNode->leftChild=newNode->rightChild=NULL;
        scanf("%d",&newNode->value);
        insert(root,newNode);
        ctr++;
    }
    inorder(root);
    printf("\n %d %d",leafCount,height);

}
void insert(struct Node* root,struct Node* newNode){
    if(newNode->value<root->value){
        if(root->leftChild!=NULL){
            insert(root->leftChild,newNode);
        }else{
            root->leftChild=newNode;
        }
    }
    else{
        if(root->rightChild!=NULL){
            insert(root->rightChild,newNode);
        }else{
            root->rightChild=newNode;
        }
    }
}
void inorder(struct Node* root){
    if(root!=NULL){
        if(root->leftChild==NULL && root->rightChild==NULL){
            leafCount++;
            if(height<temp){
                height=temp;
                //temp--;
            }
        }
        temp++;
        inorder(root->leftChild);
        printf("%d ",root->value);
        inorder(root->rightChild);
        temp--;
    }
}
