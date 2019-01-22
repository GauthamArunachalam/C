int main(){
    int n,p;
    scanf("%d %d",&n,&p);
    int arr[n][n];
    int rightToLeftDiagonalRow = 0,rightToLeftDiagonalCol = n-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                arr[i][j]=0;
                if(i==n/2 && j==n/2){
                    rightToLeftDiagonalRow++;
                rightToLeftDiagonalCol--;
                }
            }else if(i==n/2 || j==n/2){
                arr[i][j]=0;
            }else if(i==rightToLeftDiagonalRow && j==rightToLeftDiagonalCol){
                arr[i][j]=0;
                rightToLeftDiagonalRow++;
                rightToLeftDiagonalCol--;
            }else{
                arr[i][j]=-1;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
