#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,flag=0,index=0,flag1=0;
    scanf("%d",&n);
    char source[n][100],desti[n][100],res[n][100];
    for(int i=0;i<n;i++){
        scanf("%s %s",source[i],desti[i]);
    }
    for(int i=0;i<n;i++){
        flag=0;
        for(int j=0;j<n;j++){
            if(strcmp(source[j],desti[i])==0){
                flag=1;
                break;
            }

        }
        if(flag==0){
               // printf("\n%s\n",desti[i]);
                if(index>0){
                    flag1=0;
                    for(int k=0;k<index;k++){
                        if(strcmp(res[k],desti[i])==0){
                            flag1=1;
                        }
                    }
                }
                if(flag1==0){
                printf("%s ",desti[i]);
                    strcpy(res[index],desti[i]);
                    index++;
                }
        }
    }
   // printf("\n");
    //for(int i=0;i<index;i++)
      //  printf("%s\n",res[i]);

}
