int main(){
    char str[1001],currStr[100];
    int read,index=0,count;
    scanf("%[^\n]s",str);
    while(sscanf(&str[index], "%[^0-9]%d%n",currStr,&count,&read)>0){
        while(count--){
            printf(currStr);
        }
        index+=read;
    }
}
