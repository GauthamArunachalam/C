int main(){
    char str[100];
    int count=0,index;
    scanf("%s",str);
    int l = strlen(str);
    index=0;
    for(int i=0;i<l;i++){
        if(str[index]==str[i] && i!=l-1){
                if(i==l-2)
                    count++;
            count++;
            continue;
        }else{
            printf("%c%d",str[index],count);
            index=i;
            count=1;
        }
    }
}
