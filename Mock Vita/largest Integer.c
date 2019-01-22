int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n+1][m+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
