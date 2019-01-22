int main(){
    char str[100];
    scanf("%s",&str);
    int counts[26]={0};
    int len[26]={0},max,min=99999;
    int index;
    while(str[index]!='\0'){
        counts[(int)str[index]-97]++;
        len[(int)str[index]-97]=len[(int)str[index]-97]+index;
        index++;
    }
    for(int i=0;i<26;i++){
        if(max<=counts[i]){
            max=counts[i];
        }
        //printf("%d",len[i]);
    }
    for(int i=0;i<26;i++){
            if(max==counts[i] ){
                if(min>len[i]){
                    min=len[i];
                    index=i;
                }
            }
    }
    printf("%c",index+97);
}


