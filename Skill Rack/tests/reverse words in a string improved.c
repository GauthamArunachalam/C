int main(){
    char s[100];
    int a;
    scanf("%[^\n]s",s);
    int length =strlen(s);
    for(int i=length-1;i>=0;i--){
        if(s[i]==' ' || i==0){
            if(i!=0){
            printf("%s ",&s[i+1]);
            s[i]='\0';
            }else{
                printf("%s",&s[i]);
            }
        }
    }
}
