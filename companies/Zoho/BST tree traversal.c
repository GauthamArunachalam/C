struct Node{
        int val;
        struct Node *leftChild,*rightChild;
};
struct doubleLinked{
    struct doubleLinked *prev;
    int value;
    struct doubleLinked *next;
};
struct doubleLinked *first='\0',*last;
void insertDouble(struct doubleLinked *root);
void insert(struct Node *root,struct Node *newNode);
void inorder(struct Node *root);
void preorder(struct Node *root);
void postorder(struct Node *root);
int inorderArr[100];int index=0;
int main(){
    char str[100];
    int ascii[100];
    printf("Enter the string: ");
    scanf("%s",str);
    //printf("\n\n%s",str);
    int len=strlen(str);
    char out[len][4];
    for(int i=0;i<len;i++)
        ascii[i]=(int)str[i];
    struct Node *root=malloc(sizeof *root);
    root->val=ascii[0];
    root->leftChild='\0';
    root->rightChild='\0';
    for(int i=1;i<len;i++){
            //printf("check");
        struct Node *newNode = malloc(sizeof *newNode);
        newNode->val=ascii[i];
        newNode->leftChild=newNode->rightChild='\0';
        insert(root,newNode);
    }
    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
    postorder(root);
    printf("\n");

    for(int i=0;i<len;i++){
        struct doubleLinked *add=malloc(sizeof *add);
        add->value=inorderArr[i];
        add->prev=add->next='\0';
        insertDouble(add);
    }
    printf("\n");
    for(int i=0;i<index;i++){
           // printf("check");
        str[i]=(first->value);
        first=first->next;
    }
    printf("\n%s",str);

    /*for(int i=0;i<len;i++){
        printf("%d ",first->value);
        first=first->next;
    }*/
}
void insert(struct Node* root,struct Node* newNode){
    if(newNode->val<root->val){
        if(root->leftChild!='\0'){
            insert(root->leftChild,newNode);
        }else{
            root->leftChild=newNode;
        }
    }
    else{
        if(root->rightChild!='\0'){
            insert(root->rightChild,newNode);
        }else{
            root->rightChild=newNode;
        }
    }
}
void inorder(struct Node *root){
    if(root!='\0'){
        inorder(root->leftChild);
        printf("%d ",root->val);
        inorderArr[index]=root->val;
        index++;
        inorder(root->rightChild);
    }
}
void preorder(struct Node *root){
    if(root!='\0'){
        printf("%d ",root->val);
        preorder(root->leftChild);
        preorder(root->rightChild);
    }
}
void postorder(struct Node *root){
    if(root!='\0'){
        postorder(root->leftChild);
        postorder(root->rightChild);
        printf("%d ",root->val);
    }
}
void insertDouble(struct doubleLinked *root){
    if(first=='\0'){
        root->prev=root->next='\0';
        first=root;
        last=root;
    }else{
        last->next=root;
        root->prev=last;
        last=root;
    }
}
