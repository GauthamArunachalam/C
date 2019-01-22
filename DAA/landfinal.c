#include<stdio.h>
#include<conio.h>
int k=1;

int main()
{    int t,i,n;
    scanf("%d",&t);
    int b[t+1];
    for(i=1;i<=t;i++)
    {
        scanf("%d",&b[i]);
        n=b[i];
        int a[n+1];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=((n+1)/2);i++)
    {
        if(a[i]==i);
        else
        {
           k=0;
        }
    }
    for(i=((n+1)/2)+1;i<=n;i++)
    {
        if(a[i]==(n-i+1));
        else
        {
           k=0;
        }

        }

         printf("%d",k);
    }
}
