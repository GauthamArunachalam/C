int main(){
    char s[100];
    scanf("%s",s);
    int l=strlen(s);
    l--;
    int f=0;
    for(int i=0;i<l/2;i++){
        for(int j=1;j<=i;j++)
            printf(" ");
        printf("%c",s[f]);
        for(int j=1;j<=i*2+1;j++)
            printf(" ");
        printf("%c",s[l]);
        f++;
        l--;
        printf("\n");
    }
}
