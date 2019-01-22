int main(){
    int n;
    scanf("%d",&n);
    int arr[100],index=0;
    while(n>0){
                    index++;
        arr[index]=n%10;
        n=n/10;

    }
    int start =index,last=1,diff=index/2;
    for(int i=1;i<=index;i++){
        if(last<start){
            for(int j=1;j<=i-1;j++)
                printf(" ");
            printf("%d",arr[last]);
            for(int j=1;j<=diff*2;j++){
                printf(" ");
            }
            printf("%d",arr[start]);
        }
        else if(last==start){
            for(int j=1;j<=i-1;j++)
                printf(" ");
            printf("%d",arr[last]);
        }
        else{
            for(int j=i;j>=1;j--)
                printf(" ");
            printf("%d",arr[start]);
            for(int j=1;j<=diff*2;j++){
                printf(" ");
            }
            printf("%d",arr[last]);
        }
        start--;
        last++;
        diff--;
        printf("\n");

    }
}
