int main(){
    char str[1001],currStr[101];
    int count=1,index=1,read;
    scanf("%[^\n]",str);
    while(str[index-1]){
        if(str[index]!=str[index-1]){
            printf("%c%d",str[index-1],count);
            count=1;
        }else{
            count++;
        }
        index++;
    }
}
