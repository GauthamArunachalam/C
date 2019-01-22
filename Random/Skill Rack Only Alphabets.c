int main(){
    char str[100];
    scanf("%[^\n]s",str);
    int len = strlen(str);
    for(int i=0;i<len;i++){
        if((str[i]>=65 && str[i]<=90)|| (str[i]>=97 && str[i]<=122)){//  65 to 90 ascii value of A to Z 97 to 122 ascii value of a to z
            printf("%c",str[i]);
        }
    }
}
