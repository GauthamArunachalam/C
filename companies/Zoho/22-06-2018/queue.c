char queue[100];
int front=-1,rear=-1;
void enqueue(char a);
void dequeue();
void enqueue(char a){
    //if(front==rear){
        queue[++front]=a;
    //}
}
void dequeue(){
    if(front!=rear){
        rear++;
    }
    if(front==rear){
        front=rear=-1;
    }
}
int main(){
    char str[100];
    printf("\n\n\t Enter the string: ");
    scanf("%s",str);
    int len=strlen(str);
    for(int i=len-1;i>=0;i--){
        enqueue(str[i]);
    }
    printf("%s",queue);
    for(int i=len-1;i>=0;i--){
        dequeue();
    }
    printf("%s",queue);
}
