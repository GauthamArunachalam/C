#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,arr[10000];
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    while(n>=1){
        printf("%d ",arr[n]);
        if(arr[n]%2==0){
            n=n-2;
        }
        else{
            n=n-3;
        }
    }

}
