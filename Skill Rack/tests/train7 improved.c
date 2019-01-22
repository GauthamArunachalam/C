int main(){
    char s[100];
    int index=1;
    scanf("%s",&s);
    int l=strlen(s);
    int l1=l;
    for(int i=1;i<=(l/2)+1;i++){
            s[--l1]='\0';
        printf("%s",&s[index]);
        index++;
        printf("\n");
    }
}
