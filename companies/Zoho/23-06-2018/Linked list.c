void add();
void Remove();
struct Node{
    char name[100];
    int len;
    struct Node *next;
};
int n;
struct Node *head,*last;
struct Node *head1,*last1;
int main(){
    int n;
    printf("Enter the no. of names: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        add();
    }
    Remove();
    for(int i=0;i<n;i++){
        printf("%s",head->name);
        head=head->next;
    }
}
void add(){
    if(head=='\0'){
        struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
        temp->next='\0';
        printf("\nEnter the name: ");
        scanf("%s",temp->name);
        int i=0;
        while(temp->name[i]!='\0')
            i++;
        temp->len=i;
        head=temp;
        last=temp;
    }else{
         struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
         temp->next='\0';
        printf("\nEnter the name : ");
        scanf("%s",temp->name);
        int i=0;
        while(temp->name[i]!='\0')
            i++;
        temp->len=i;
        last->next=temp;
        last=temp;
    }
}
void Remove(){
    struct Node *temp = malloc(sizeof(struct Node));
    temp=head;
    while(1){
        if(temp->name[(temp->len)-1]=='y' || temp->name[(temp->len)-1]=='n' || temp->name[(temp->len)-1]=='m'){
            temp=temp->next;
            head=head->next;
        }else{
            break;
        }
    }
    for(int i=1;i<n;i++){
        if(temp->next->name[(temp->next->len)-1]=='y' || temp->next->name[(temp->next->len)-1]=='n' || temp->next->name[(temp->next->len)-1]=='m'){
            temp->next=temp->next->next;
        }
        temp=temp->next;
    }
}
