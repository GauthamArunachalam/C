#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a[10]={0};
    int evenCount =0,t1,evenMax,evenSecondMax,flag=0;
    unsigned long long int a1,b;
    scanf("%llu %llu",&a1,&b);
    t1 = a1;
    while(t1>0){
        a[t1%10]++;
        if((t1%10)%2==0){
            evenCount++;
        }
        t1/=10;
    }
    t1 = b;
    while(t1>0){
        a[t1%10]++;
        if((t1%10)%2==0){
            evenCount++;
        }
        t1/=10;
    }
    if(evenCount<2){
        printf("-1");
        exit(0);
    }
    for(int i=8;i>=0;i-=2){
        if(a[i]>0){
            evenMax=i;
            a[i]--;
            break;
        }
    }
    for(int i=8;i>=0;i-=2){
        if(a[i]>0){
            evenSecondMax=i3;
            a[i]--;
            break;
        }
    }
    for(int i=1;i<10;i++){
        if(a[i]>0){
            while(a[i]){
                printf("%d",i);
                a[i]--;
            }
            break;
        }
    }
    for(int i=0;i<10;i++){
        if(a[i]>0){
            while(a[i]){
                printf("%d",i);
                a[i]--;
            }
        }
    }
    printf("%d%d",evenSecondMax,evenMax);
}
