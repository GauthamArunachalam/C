#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s[100],temp[100],max;
    int a[26],t,low=0,len,i,j,as1,as2;
    scanf("%s",&s);
    len=strlen(s);
    for(i=0;i<len;i++){
        for(j=i;j<len;j++){
            as1=(int)s[i];
            as2=(int)s[j];
            if(as1>as2){
                max=s[i];
                s[i]=s[j];
                s[j]=max;
            }
        }
    }
    for(i=0;i<len;i++){
       t=0;
       if(s[i]==s[i-1])
            continue;
       for(j=i;j<len;){
            if(s[i]==s[j]){
                t++;
                j++;
            }
            else{
                j=j+t;
                break;
            }
       }
       printf("%c%d ",s[i],t);
    }
}
