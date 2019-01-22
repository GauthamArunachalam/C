void check_palindrome(char s[100]);
int m=0;
int main(){
    char s[100];
    int startIndex=0,endIndex=0;
    scanf("%[^\n]s",s);
    int l=strlen(s);
    while(endIndex<l){
        if(s[endIndex]==' ' || endIndex==l-1){
            if(endIndex==l-1){
                endIndex++;
            }
            int j=0;
            char t[50]={};
            for(int i=startIndex;i<endIndex;i++){
                t[j]=s[i];
                j++;
            }
            check_palindrome(t);
            endIndex++;
            startIndex=endIndex;
        }
        else{
            endIndex++;
        }
    }
    if(m==0){
        printf("-1");
    }
}
void check_palindrome(char s[100]){
    int l = strlen(s);
    //printf("%s\n",s);
    int j=l-1,a=0;
    for(int i=0;i<l/2;i++){
        if(s[i]!=s[j]){
            a=1;
            //printf("%c %c",s[i],s[j]);
            break;
        }
        j--;
    }
    if(a==1){
        printf("%s ",s);
        m++;
    }
}
