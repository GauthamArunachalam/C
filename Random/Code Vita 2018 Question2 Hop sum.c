int main(){
    int n,arr[31],sum,maxSum,tsum;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i==n-1){
            scanf("%d",&arr[i]);
            sum+=arr[i];
        }else{
            scanf("%d,",&arr[i]);
            sum+=arr[i];
        }
    }
    maxSum = sum;
    for(int i=0;i<n-1;i++){
        tsum=sum;
        tsum-=arr[i];
        tsum+=arr[i+1];
        if(tsum>maxSum){
            maxSum = tsum;
        }
    }

    for(int i=0;i<n-2;i++){
        tsum=sum;
        tsum-=(arr[i]+arr[i+1]);
        tsum+=(arr[i+2]*2);
        if(tsum>maxSum){
            maxSum = tsum;
        }
    }

    printf("%d",maxSum);
}
