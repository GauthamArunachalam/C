int main(){
    int n,max=0,min,flag=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(max<arr[i])
                max=arr[i];
    }
   // printf("%d\n",max);
    for(int i=0;i<n;i++){
        min=max+1;
        flag=0;
        for(int j=0;j<n;j++){
            if(arr[j]>arr[i] && min>arr[j]){
                min=arr[j];
                flag=1;
            }
        }
        if(flag==0){
            printf("%d->_ \n",arr[i]);
        }else{
            printf("%d->%d\n",arr[i],min);
        }
    }
}
