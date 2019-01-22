#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,hops=0,t=0;
    scanf("%d %d",&n,&m);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=n-1;i>=0;i--){
        if(arr[i]==m){
            for(int j=i;j<n;){
                if(j+arr[i]<=n-1){
                    hops+=1;
                    j=j+arr[i];
                    if(j==n-1){
                        if(hops>1)
                            hops+=1;
                        t=1;
                        break;
                    }
                }else{
                    break;
                }
            }
        }
        if(t==1)
            break;
    }
    if(hops==0){
        printf("-1");
    }else{
        printf("%d",hops);
    }
}
