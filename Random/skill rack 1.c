#include<stdio.h>
#include <stdlib.h>

int main()
{
    int t1,t2,t3,nth,diff,term=t1;
    scanf("%d %d %d %d",&t1,&t2,&t3,&nth);
    diff = t2-t1;
    for(int i=1;i<=nth;i++){
        term=term+diff;
        printf("%d %d\n",i,term);
    }
    printf("%d",term);

}
