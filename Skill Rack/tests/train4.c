#include<stdio.h>
#include <stdlib.h>

int main()
{
   int n,t,i,j;
   int arr[10]={0};
   scanf("%d",&n);
   int index;
   while(n>0){
       t=n%10;
       arr[t]++;
       n=n/10;
   }
   for(i=9;i>=0;i--){
    for(j=1;j<=arr[i];j++){
        printf("%d",i);
    }
   }
}
