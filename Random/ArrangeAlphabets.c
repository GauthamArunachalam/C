#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char s[100],t,b[100];
    scanf("%s",s);
    int i,j,k=0,c=0;
    for(i=0; i<strlen(s); i++)
    {
        for(j=0; j<i; j++)
        {
            if(s[i]==s[j])
                c=1;
        }
        if(c==0)
        {
            b[k]=s[i];
            k++;
        }
        c=0;
    }
    for(i=0; i<k; i++)
    {
        for(j=i+1; j<k; j++)
        {
            if(b[i]>b[j])
            {
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
    }
    for(i=strlen(b)-1; i>=0; i--)
        printf("%c",b[i]);

}
