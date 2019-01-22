#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,arr[1000],t1,t2;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    for(int i=1;i<n;i++){
        t1=arr[i]%10;
        t2=arr[i+1]%10;
        if(t1==t2){
            printf("%d ",arr[i]);
        }
    }

}
