#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,arr[100];
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    for(int i=1;i<n;i++){
        if(i%2!=0){
            for(int j=arr[i];j<=arr[i+1];j++)
                printf("%d ",j);
        }
        else{
            for(int j=arr[i+1];j>=arr[i];j--)
                printf("%d ",j);
        }
    }

}
