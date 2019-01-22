int ans;
void fillCombo(int arr[],int n,int combo[],int comboSize,int filled, int fillIndex,int divi){

    combo[filled]=arr[fillIndex];
    filled++;
    fillIndex++;
    if(filled==comboSize){
        int sum=0;
        int index=0;
        for(index=0;index<=comboSize-1;index++){
           sum=sum+combo[index];
          // printf("%d ",combo[index]);
        }
        //printf("\n%d\n",sum);
      if(sum%divi==0){
            if(ans<sum)
                ans=sum;
        }
       return;
    }
    while(fillIndex<n){
        fillCombo(arr,n,combo,comboSize,filled,fillIndex,divi);
        fillIndex++;
    }
}

int main(){
    int n,arr[100],divi;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&divi);
        int comboSize;
        for(comboSize=n;comboSize>=2;comboSize--){
                int combo[comboSize];
            int filled=0,fillIndex;
            for(fillIndex=0;fillIndex<n;fillIndex++){
                fillCombo(arr,n,combo,comboSize,filled,fillIndex,divi);
            }
        }
        printf("%d",ans);
    }

