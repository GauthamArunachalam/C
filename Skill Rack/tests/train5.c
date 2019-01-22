#include<stdio.h>
#include <stdlib.h>

int main()
{
   int n,t,i,j,l=0,k;
   int arr[10]={0};
   scanf("%d",&n);
   int index;
   while(n>0){
       t=n%10;
       arr[t]++;
       n=n/10;
   }
   for(i=1;i<=9;i++){
        for(j=1;j<=arr[i];j++){
            if(l==1){
                for(k=1;k<=arr[0];k++)
                    printf("%d",0);
                    l=l+1;
                    printf("%d",i);
            }
            else{
                l=l+1;
                printf("%d",i);
            }

        }
    }
}
