#include<stdio.h>
#include <stdlib.h>

int main()
{
    char str[100000];
    int n,count=0,flag=0;
    scanf("%s",str);
    scanf("%d",&n);
    int len = strlen(str);
    for(int i=0;i<len;i++){
        //flag=0;
        for(int j=i-1;j>=i-n && j>=0;j--){
            if(str[i]==str[j] ){
                count++;
                //flag=1;
                //printf("%c %c %d %d\n",str[i],str[j],i,j);
            }
        }
        for(int j=i+1;j<=i+n && j<len;j++){
            if(str[i]==str[j] ){
                count++;
             //   printf("%c %c %d %d\n",str[i],str[j],i,j);
            }
        }

    }

    printf("%d",count);


}
