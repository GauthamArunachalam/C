int main(){
    int count=1;
    char str[1001];
    scanf("%s",str);
    for(int i=0;str[i];i++){
        if(str[i]==str[i+1])
            count++;
        else{
                printf("%c%d",str[i],count);
            count=1;
        }
    }
}
