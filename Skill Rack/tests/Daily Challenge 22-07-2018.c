#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,strIndex,i,rowCount=0,rowcountLimit=1;
    char str[1000];
    scanf("%d",&n);
    getchar();
    scanf("%[^\n]s",str);
    int strLength = strlen(str);
    for(strIndex=0;strIndex<strLength;strIndex++){
        if(str[strIndex+1]==' ' || strIndex==strLength-1){
            i=strIndex+1-n;
            for(;i<=strIndex;i++){
                printf("%c",str[i]);
            }
            printf(" ");
            rowCount++;
            if(rowCount==rowcountLimit){
                if(strIndex==strLength-1){
                    break;
                }
                printf("\n");
                rowCount=0;
                rowcountLimit++;

            }
            if(strIndex==strLength-1){
                    for(i=rowCount+1;i<=rowcountLimit;i++){
                        for(int j=0;j<n;j++){
                            printf("*");
                        }
                        printf(" ");
                    }
                }
        }
    }

}
