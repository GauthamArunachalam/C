int main(){
    char str[100];
    scanf("%s",str);
    int l = strlen(str);
    for(int i=0;i<l;i++){
            int ascii = (int)str[i];
            int asx = (int)str[i+1];
        if((ascii>=97 && ascii<=122) && (asx>=97 && asx<=122)){

           printf("%c",str[i]);
           // printf("%d %c fine\n",ascii,str[i]);
        }else{
            int j = str[i]-'0';
           // printf("%d\n",j);
            for(int k=1;k<=j;k++)
                printf("%c",str[i-1]);
        }
    }
}
