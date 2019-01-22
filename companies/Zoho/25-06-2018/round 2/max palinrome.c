int start,end,length;
void check(char str[],int i,int j);
int main(){
    char str[100];
    scanf("%s",str);
    int len=strlen(str);
    for(int i=0;i<len;i++){
        for(int j=len-1;j>=i+1;j--){
            check(str,i,j);
        }
    }
    for(int i=start;i<=end;i++){
        printf("%c",str[i]);
    }
}
void check(char str[],int i,int j){
    int flag=0,len=j-i,last=j;
    for(int k=i;k<len/2;k++){
        if(str[k]!=str[last]){
            flag=1;
            break;
        }
        last--;
    }
    if(flag==0){
        if(length<=len){
            start=i;
            end=j;
            length=len;
        }
    }
}
