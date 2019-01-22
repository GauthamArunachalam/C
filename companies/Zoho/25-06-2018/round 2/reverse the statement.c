int main(){
    char str[100];
    int start,end;
    scanf("%[^\n]",str);
    int len=strlen(str);
    start=end=len-1;
    while(start>=0){
        if(str[start]==' ' || start==0){
            if(start==0)
                start--;
            printf("%s ",str+start+1);
            str[start]='\0';
            start--;
            end=start;
        }
        else{
            start--;
        }
    }
}
