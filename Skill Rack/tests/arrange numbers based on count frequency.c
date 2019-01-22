#include<stdio.h>
#include <stdlib.h>

int main()
{
    int arr[30],count[10]={0};
    int i=0,t,flag=1,max=0,tflag=0;
    while(scanf("%d",t)>0){
        arr[i]=t;
        count[arr[i]]++;
        i++;
    }

    /*while(flag){
        max=0,tflag=0;
        for(int j=0;j<10;j++){
            if(max<count[j]){
                max=count[j];
                t=j;
            }
        }
        while(max--){
            printf("%d",t);
        }
        for(int j=0;j<10;j++){
            if(count[j]>0){
                tflag=1;
            }
        }
        if(tflag==0){
            flag=0;
        }
    }*/


}
