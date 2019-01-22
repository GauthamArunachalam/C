#include<stdio.h>
void fillCombo(int arr[],int n,int combo[],int comboSize,int filled, int fillIndex,int sumInput){
    combo[filled]=arr[fillIndex];
    filled++;
    fillIndex++;
    if(filled==comboSize){
        int sum=0;
        int index=0;
        for(index=0;index<=comboSize-1;index++){
          //  printf("%d ",combo[index]);
           sum=sum+combo[index];
           // printf("%d ",sum);
        }

     //  printf("%d \n",sum);
            //   printf("\n");
      if(sum==sumInput){
            printf("\n");
            for(index=0;index<=comboSize-1;index++)
               printf("%d ",combo[index]);
            //return;
        }
       return;
    }
    while(fillIndex<n){
        fillCombo(arr,n,combo,comboSize,filled,fillIndex,sumInput);
        fillIndex++;
    }
}

int main(){
    int n,index,sumInput;
    scanf("%d %d",&n,&sumInput);
    int arr[n];
    for(index=0;index<=n-1;index++){
        scanf("%d",&arr[index]);
    }
    int comboSize;
    for(comboSize=1;comboSize<=n;comboSize++){
        int combo[comboSize];
        int filled=0,fillIndex;
        for(fillIndex=0;fillIndex<=n-comboSize;fillIndex++){
            fillCombo(arr,n,combo,comboSize,filled,fillIndex,sumInput);
        }

    }
}
