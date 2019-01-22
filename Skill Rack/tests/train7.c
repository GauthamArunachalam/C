int main(){
    char s[100];
    scanf("%s",&s);
    int l=strlen(s);
    int n=1;
    int l1=l;
    for(int i=1;i<=(l/2)+1;i++){
        printf("%s",s);
        for(int j=0;j<=l;j++){
            s[j]=s[j+1];
        }
        s[l1-n]='\0';
        s[l1-n-1]='\0';
        l1--;
        n++;
        printf("\n");
    }
}
