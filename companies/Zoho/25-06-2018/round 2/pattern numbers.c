int main(){
    int n,a;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        a=i;
        for(int j=n;j>=i;j--){
            printf("%d ",a);
            a=a+j;
        }
        printf("\n");
    }
}
