void printAs(char str[]);
void upperConvert(char str[]);
void firstLast(char str[]);
char *even(char str[]);
char *odd(char str[]);
char b[100];
int main(){
    char names[5][100];
    printf("\n\n\t String Manipulation\n");
    for(int i=0;i<5;i++){
        printf("\nEnter string %d: ",i+1);
        scanf("%s",names[i]);
    }
    for(int i=0;i<5;i++){
        printAs(names[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++){
        upperConvert(names[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++){
        firstLast(names[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++){
        if(i%2==0)
            strcpy(names[i],even(names[i]));
    }
    printf("\n");
    for(int i=0;i<5;i++){
        if(i%2!=0)
            strcpy(names[i],odd(names[i]));
    }
    printf("\n");
    for(int i=0;i<5;i++){
        if(i%2==0)
            printf("%s\n",names[i]);
        else
            printf("%s\n",names[i]);
    }

}
void printAs(char str[]){
    printf("%s\n",str);
}
void upperConvert(char str[]){
    int len=strlen(str);
    for(int j=0;j<len;j++){
        printf("%c",toupper(str[j]));
    }
    printf("\n");
}
void firstLast(char str[]){
    int len=strlen(str);
    printf("%c",toupper(str[0]));
    for(int j=1;j<len-1;j++)
        printf("%c",str[j]);
    printf("%c\n",toupper(str[len-1]));
}
char *even(char str[]){
    printf("%s\n",str);
    int len=strlen(str)-1;
    int last=len,i;
    for(i=0;i<=len;i++){
        b[i]=str[last];
        last--;
    }
    b[i]='\0';
    str=b;
    return str;
}
char *odd(char str[]){
    printf("%s\n",str);
    int len=strlen(str)-1;
    for(int i=0;i<len;i++){
        if(i%2==0)
            str[i]=toupper(str[i]);
        else
            str[i]=tolower(str[i]);
    }
    return str;
}
