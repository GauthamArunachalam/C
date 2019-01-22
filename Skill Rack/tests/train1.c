#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s1[100],s2[100];
    int i,index,l,l2,j;
    scanf("%s \n%s",&s1,&s2);
    l=strlen(s1);
    l2=strlen(s2);
    for(i=0;i<l;i++){
        if(s1[i]==s2[0]){
            index=i;
            break;
        }
    }
    printf("%s\n",s1);
    for(i=1;i<l2;i++){
        for(j=1;j<=index;j++){
            printf("-");
        }
        printf("%c",s2[i]);
        for(j=index+1;j<l;j++){
            printf("-");
        }
        printf("\n");
    }


}
