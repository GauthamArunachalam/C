int subString(char a[],char b[],int index1,int index2,int len1,int len2,int start);
int main(){
    char str1[100],str2[100];
    scanf("%s",str1);
    scanf("%s",str2);
    int len1=strlen(str1);
    int len2=strlen(str2);
    for(int i=0;i<len1;i++){
        subString(str1,str2,i,0,len1,len2,i);
    }
    printf("-1");
}
int subString(char a[],char b[],int index1,int index2,int len1,int len2,int start){
    if(a[index1]==b[index2]){
            if(index2==len2-1){
                printf("%d",start);
                exit (0);
            }
        subString(a,b,index1+1,index2+1,len1,len2,start);
    }
    else{
        return;
    }
}


