#include<stdio.h>
#include<stdlib.h>
int main(){
    char str[1001];
    scanf("%s",&str);
    int counts[26]={0};
    //counts['a']=1;
    int index=0;
    while(str[index]!='\0'){
        counts[(int)str[index]-97]++;
        index++;
    }
    for(int i=0;i<26;i++){
        if(counts[i]>0){
            printf("%c%d ",i+97,counts[i]);
        }
    }    return 0;
}
