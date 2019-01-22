#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    char c;
    scanf("%d%c%d",&a,&c,&b);
    if(c=='a'||c=='A'){
        printf("%d",a+b);
    }else if(c=='s'||c=='S'){
        printf("%d",a-b);
    }else if(c=='m'||c=='M'){
        printf("%d",a*b);
    }else if(c=='d'||c=='D'){
        printf("%d",a/b);
    }


}
