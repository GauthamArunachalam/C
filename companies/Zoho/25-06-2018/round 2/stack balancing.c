char stack[100];
int top=-1;
void push(char ch);
void pop(char ch);
int main(){
    char str[100];
    int open=0;
    scanf("%s",str);
    int l=strlen(str);
    for(int i=0;i<l;i++){
        if(str[i]=='{' || str[i]=='(' || str[i]=='['){
            push(str[i]);
            open++;
        }
        else if(str[i]=='}' || str[i]==')' || str[i]==']'){
            pop(str[i]);
            open--;
        }
    }
    if(open==0)
        printf("True");
    else
        printf("False");
}
void push(char ch){
   // printf("%c \n",ch);
    stack[++top]=ch;
}
void pop(char ch){
   //printf("%c %c\n",ch,stack[top]);
    if(ch=='}' && stack[top]=='{'){
           // printf("%c %c\n",ch,stack[top]);
        top--;
    }else if(ch==')' && stack[top]=='('){
            // printf("%c %c\n",ch,stack[top]);
        top--;
    }else if(ch==']' && stack[top]=='['){
       // printf("%c %c\n",ch,stack[top]);
        top--;
    }else{
        printf("False");
        exit(0);
    }
}
