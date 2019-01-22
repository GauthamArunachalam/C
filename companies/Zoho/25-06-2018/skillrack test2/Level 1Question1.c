void upMov(int n,int m,int arr[n][m],int i,int j);
void downMov(int n,int m,int arr[n][m],int i,int j);
int a=0;
int main(){
    int n,m;
    int startingRow,startingColumn;
    printf("\n\t Enter the no. of rows: ");
    scanf("%d",&n);
    printf("\n\t Enter the no. of columns: ");
    scanf("%d",&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            scanf("%d",&arr[i][j]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    printf("Enter the starting row: ");
    scanf("%d",&startingRow);
    printf("Enter the starting Column: ");
    scanf("%d",&startingColumn);
    if(startingRow==0){
        downMov(n,m,arr,startingRow,startingColumn);
    }else{
        upMov(n,m,arr,startingRow,startingColumn);
    }
}
void downMov(int n,int m, int arr[n][m],int i,int j){
    a++;
    int k;
    for(k=0;k<m;k++)
        printf("%d ",arr[k][j]);
    printf("\n");
    if(j==m-1){
        j=-1;
    }
    if(a==m){
        exit(0);
    }
    upMov(n,m,arr,i,j+1);
}
void upMov(int n,int m,int arr[n][m],int i,int j){
    a++;
    int k;
    for(k=m-1;k>=0;k--){
        printf("%d ",arr[k][j]);
    }
    if(j==m-1){
        j=-1;
    }
    printf("\n");
    if(a==m)
        exit(0);
    downMov(n,m,arr,i,j+1);
}
/* 5 6 15 16 25
   4 7 14 17 24
   3 8 13 18 23
   2 9 12 19 22
   1 10 11 20 21*/
