#include<stdio.h>
#include <stdlib.h>

int main()
{
    char str[51];
    int start,end,diff;
    scanf("%s",str);
    int len=strlen(str);
    start=0;end=len-1;
    diff=len/2;
    for(int i=0;i<len;i++){
        for(int j=1;j<=i+1;j++)
            printf(" ");
        printf("%c",str[start]);
        for(int j=1;j<=diff*2;j++)
            printf(" ");
        printf("%c",str[end]);
        start++;
        end--;
        diff--;
        printf("\n");
    }



}
