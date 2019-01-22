#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,maxScore,score;
    char name[100],maxName[100];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%[^0-9] %d",name,&score);
        //printf("%s %d",name,score);
        if(maxScore<score){
            maxScore=score;
            strcpy(maxName,name);
        }
    }
    maxName[strlen(maxName)-1]='\0';
    printf("%s",maxName);


}
