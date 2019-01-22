int top=-1;
char stack[100];
void push(char c);
void pop(char c);
int main(){
    int open=0,close=0;
    char str[100];
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='{' || str[i]=='(' || str[i]=='['){
            open++;
            push(str[i]);
        }
        else{
            close++;
            pop(str[i]);
        //}else{
            //close++;
          //  push(str[i]);
        }
    }
    //printf("%d %d %d \n",open,close,top);
    if(top==-1 && open==close){
        printf("balanced");
    }else{
        printf("Not Balanced");
    }
}

void push(char c){
    stack[++top]=c;
}
void pop(char c){
    if(stack[top]=='{' && c=='}' || stack[top]=='(' && c==')' || stack[top]=='[' && c==']'){
        top--;
    }
}
