#include<stdio.h>
#include <stdlib.h>

int main()
{
    long int n;
    long int t=0,flag=0;
    scanf("%ld",&n);
    t=n%10;
    for(int i=1;i<=5;i++){
        if(t==i){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("NO");
    }else{
        printf("YES");
    }

}
