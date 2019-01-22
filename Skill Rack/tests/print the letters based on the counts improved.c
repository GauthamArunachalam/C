int main(){
    char str[1001],currStr[101];
    int count,index=0,read;
    scanf("%[^\n]s",str);
    while(sscanf(&str[index], "%[^0-9]%d%n",currStr,&count,&read)>0){
        while(count--){
            printf(currStr);
        }
        index+=read;
    }
}
