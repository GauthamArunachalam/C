#include<stdio.h>
#include <stdlib.h>

int main()
{
    char str[100],ch;
    scanf("%s",str);
    int index=0,read=0,count=0;
    while(sscanf(&str[index],"%d%c%n",&count,&ch,&read)>0){
        while(count--){
            printf("%c",ch);
        }
        index+=read;
    }


}
