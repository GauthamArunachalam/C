
void fillCombo(int arr[],int n,int combo[],int comboSize,int filled, int fillIndex,int sumInput,int secondhalf[]){

    combo[filled]=arr[fillIndex];
    secondhalf[fillIndex]=1;
    filled++;
    fillIndex++;
    if(filled==comboSize){
        int sum=0;
        int index=0;
        for(index=0;index<=comboSize-1;index++){
            //printf("%d ",combo[index]);
           sum=sum+combo[index];
           // printf("%d ",sum);
        }

     //  printf("%d \n",sum);
               //printf("\n");
      if(sum==sumInput){
            printf("\n");
            for(index=0;index<=comboSize-1;index++)
               printf("%d ",combo[index]);
            printf("=");
            for(int i=0;i<n;i++){
                if(secondhalf[i]==0){
                    printf("%d ",arr[i]);
                }else{
                    secondhalf[i]=0;
                }
            }

            //return;
        }
       return;
    }
    while(fillIndex<n){
        fillCombo(arr,n,combo,comboSize,filled,fillIndex,sumInput,secondhalf);
        fillIndex++;
    }
}

int main(){
    int n,arr[100],sum=0,sumInput;
        int secondhalf[100]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    if(sum%2==0){
        sumInput = sum/2;
        int comboSize;
        for(comboSize=1;comboSize<=n;comboSize++){
                int combo[comboSize];
            int filled=0,fillIndex;
            for(fillIndex=0;fillIndex<=n-1;fillIndex++){
                fillCombo(arr,n,combo,comboSize,filled,fillIndex,sumInput,secondhalf);
            }
        }

    }
}
