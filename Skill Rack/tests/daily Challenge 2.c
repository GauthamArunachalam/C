int main(){
    char str[100],cha;
    int a;
    scanf("%[^\n]",str);
    scanf("%d",&a);
    getchar();
    scanf("%c",&cha);

    if(cha=='u' || cha=='U'){
        a=a+64;
    }else if(cha=='L' || cha=='l'){
        a=a+96;
    }
    int i=0,count=0;
    while(str[i]!='\0'){
        if(str[i]==a){
            count++;
        }
        i++;
    }
    if(count==0){
        printf("-1");
        exit(0);
    }
    printf("%d",count);


    //printf("%s %d %c",str,a,cha);
}
