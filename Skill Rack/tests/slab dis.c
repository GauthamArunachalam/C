#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,slabPrice,index=0;
    float ans;
    scanf("%d %d",&n,&slabPrice);
    int price[n+1],dis[n+1];
    for(int i=1;i<=n;i++){
        scanf("%d",&price[i]);
    }
    for(int i=1;i<=n;i++){
        scanf("%d",&dis[i]);
        if(slabPrice>=price[i] && slabPrice<=price[i+1])
            index=i;
    }
    if(index==0)
        ans=slabPrice;
    else{
        float d=(float)slabPrice*((float)dis[index]/100);
        ans = (float)slabPrice-d;
    }
    printf("%.2f",ans);



}
