int main(){
    char str[200],a,b;
    int count=0;
    scanf("%s",str);
    getchar();
    getchar();
    scanf("%c",&a);
    getchar();
    getchar();
    scanf("%c",&b);
    int len = strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]==a && str[i+1]==b){
            count++;
            i++;
        }
    }
    printf("%d",count);
}
