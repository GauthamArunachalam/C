int main(){
    int n,leftSum,rightSum;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    for(int i=1;i<=n;i++){
        leftSum=0;
        rightSum=0;
        for(int j=1;j<i;j++)
            leftSum+=arr[j];
        for(int j=i+1;j<=n;j++)
            rightSum+=arr[j];
        if(leftSum==rightSum)
            printf("%d ",arr[i]);
    }
}
