int main(){
    char str1[100],str2[100];
    scanf("%s",str1);
    getchar();
    scanf("%s",str2);
    if(strcmp(str1,str2)>0){
        printf("%s%s",str2,str1);
    }else{
        printf("%s%s",str1,str2);
    }
}
