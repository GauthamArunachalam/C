int ans;
void fillCombo(int arr[],int n,int combo[],int comboSize,int filled, int fillIndex,int prod){
    combo[filled]=arr[fillIndex];
    filled++;
    fillIndex++;
    if(filled==comboSize){
        int product=1;
        int index=0;
        for(index=0;index<=comboSize-1;index++){
           product*=combo[index];
        }

      if(product%prod==0){
           ans++;
        }
       return;
    }
    while(fillIndex<n){
        fillCombo(arr,n,combo,comboSize,filled,fillIndex,prod);
        fillIndex++;
    }
}

int main(){
    int n,p,q;
    scanf("%d,%d,%d",&n,&p,&q);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d,",&arr[i]);
    }
    int prod=p*q;
    int comboSize;
    for(comboSize=2;comboSize<=n;comboSize++){
        int combo[comboSize];
        int filled=0,fillIndex;
        for(fillIndex=0;fillIndex<=n-comboSize;fillIndex++){
            fillCombo(arr,n,combo,comboSize,filled,fillIndex,prod);
        }
    }
    printf("%d",ans);
}
