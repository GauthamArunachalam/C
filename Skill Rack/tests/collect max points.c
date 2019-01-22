int main(){
    int m,n,maximum=0;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(int row=0;row<m;row++){
        for(int col=0;col<n;col++){
            scanf("%d",&arr[row][col]);
        }
    }
    int col=1,max=0;
    for(int row=0;row<m;row++){
        max=0;
        if(row==0){
            if(arr[row][col-1]>arr[row+1][col-1]){
                max=arr[row][col-1]+arr[row][col];
            }else{
                max=arr[row+1][col-1]+arr[row][col];
            }
            arr[row][col]=max;
        }else if(row==n-1){
            if(arr[row][col-1]>arr[row-1][col-1]){
                max=arr[row][col-1]+arr[row][col];
            }else{
                max=arr[row-1][col-1]+arr[row][col];
            }
            arr[row][col]=max;
            col++;
            row=-1;
        }else{
            if(max<arr[row][col-1]+arr[row][col]){
                max=arr[row][col-1]+arr[row][col];
            }
            if(max<arr[row-1][col-1]+arr[row][col]){
                max=arr[row-1][col-1]+arr[row][col];
            }
            if(max<arr[row+1][col-1]+arr[row][col]){
                max=arr[row+1][col-1]+arr[row][col];
            }
            arr[row][col]=max;
        }

        if(maximum<max)
            maximum=max;
        if(col==n){
            break;
        }
    }
    printf("%d",maximum);
}
