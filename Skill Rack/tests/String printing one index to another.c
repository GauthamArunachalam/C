int main(){
    char str[100];
    scanf("%s",str);
    int len=strlen(str);
    int middele=len/2;
    int j=1;
   // printf("%d",middele);
    for(int i=0;i<=len/2;i++){
        printf("%s\n",str+middele,j);
        middele--;
        j++;
    }
}
