int main(){
    char s[100];
    scanf("%[^\n]s",s);
    int l=strlen(s);
    int firstindex=0,lastindex=0;
    while(lastindex<l){
        if(s[lastindex]==' ' || lastindex==l-1){
            if(lastindex==l-1){
                lastindex++;
            }
            int j=0;
            char t[50]={};
            for(int i=firstindex;i<lastindex;i++){
                t[j]=s[i];
                j++;
            }
            int a=0;
            int lenthofword = strlen(t);
            int temoflen = lenthofword-1;
            //printf("%d",lenthofword);
            for(int k=0;k<=lenthofword/2;k++){
                if(t[k]!=t[temoflen]){
                    a=1;
                    //printf(" %c\n",t[temoflen]);
                    break;

                }
                temoflen--;
            }
            if(a==1){
                printf("not a palindrome ");
            }
            else{
                    printf("palindrome ");
                for(int i=firstindex;i<l-lastindex;i++){
                    s[i]=s[i+lastindex+1];
                    printf("%c\n",s[i]);
                }
            }
            lastindex++;
            firstindex=lastindex;
            printf("%s \n",t);
        }
        else{
            lastindex++;
        }
    }
    printf("\n\n%s",s);
}
