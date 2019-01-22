int main(){
    char str[100],mat[50][50];
    int j=0,k=0;
    int read,arr[50],l1;
    scanf("%s",str);
    int l = strlen(str);
    for(int i=0;i<l-1;i++){
        if(str[i]>='a' && str[i]<='z'){
                mat[j][k]=str[i];
                k++;
                str[i]=' ';
        }else{
            j++;
            k=0;
        }
    }
    int i=0;
    while(sscanf(&str[i],"%d%n",&arr[l],&read)>0){
        l1++;
        i+=read;
    }
    for(int i=0;i<=l1;i++){
        printf("%s %d",mat[i][0],arr[i]);
    }
}
