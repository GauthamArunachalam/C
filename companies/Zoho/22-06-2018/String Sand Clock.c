int main(){
    char string[100],temp[100];
    int cond=0;
    printf("Enter the String: ");
    scanf("%s",string);
    strcpy(temp,string);
    int len=strlen(string);
    int last=len-1;
    if(len%2!=0){
        cond=len/2;
    }else{
        cond=len/2-1;
    }
    for(int i=0;i<=cond;i++){
        printf("%*.*s",len-i," ",string+i);
        if(i!=last){
            string[last]='\0';
            last--;
        }
        printf("\n");
    }
    last++;
    if(len%2==0){
        string[last]=temp[last];
        last++;
        cond = cond-1;
    }else{
        cond = cond-1;
    }
    for(int i=cond;i>=0;i--){
        string[last]=temp[last];
        printf("%*.*s",len-i," ",string+i);
        last++;
        printf("\n");
    }
}
