#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,count,flag,max;
    scanf("%d",&n);
    char names[n][100],temp[100];
    int val[n],t;
    for(int i=0;i<n;i++){
        val[i]=0;
        scanf("%s",names[i]);
    }
    for(int i=0;i<n;i++){
        count=1;
        for(int j=1;names[i][j]!='\0';j++){
            flag=0;
            for(int k=j-1;k>=0;k--){
                if(names[i][j]==names[i][k]){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                count++;
            }
        }
        val[i]=count;

    }
    for(int i=0;i<n-1;i++){
        max=0;
        for(int j=i+1;j<n;j++){
            if(max<val[j] && val[i]<val[j]){
                max=val[j];
                flag=j;
            }
        }
        if(max!=0){
        //printf("%d\n",max);
        strcpy(temp,names[flag]);
        strcpy(names[flag],names[i]);
        strcpy(names[i],temp);
         t=val[flag];
                val[flag]=val[i];
                val[i]=t;
        }

    }

   for(int i=0;i<n;i++){
        for(int j=i+1;val[j]==val[i];j++){
           // printf("%s %s %d\n",names[i],names[j],strcmp(names[i],names[j]));
            if(strcmp(names[i],names[j])>0){

                strcpy(temp,names[j]);
                strcpy(names[j],names[i]);
                strcpy(names[i],temp);
            }
        }
    }
    for(int i=0;i<n;i++)
        printf("%s\n",names[i]);

}
