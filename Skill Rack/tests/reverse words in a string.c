int main(){
    char str[1000];
    int l,t;
    scanf("%[^\n]s",str);
    l = strlen(str);
    int last=l-1;
    int i=0;
    t=last;
    while(last>=0){
        if(str[last]!=' '){
               // printf("%c",str[last]);
            last--;
        }
        else{
            for(i=last+1;i<=t;i++){
                printf("%c",str[i]);
            }
            printf(" ");
                t=last-1;
                last--;
        }
        if(last==0){
               //t printf("check");
            for(i=last;i<=t;i++){
                printf("%c",str[i]);
            }
        }

    }

}
