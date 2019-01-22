int main(){
    char str[100];
    int charArray[26]={0};
    scanf("%s",str);
    int len = strlen(str);
    for(int i=0;i<len;i++){
        charArray[str[i]-97]++;
    }

    for(int i=25;i>=0;i--){
        if(charArray[i]!=0)
            printf("%c",i+97);
    }
}
