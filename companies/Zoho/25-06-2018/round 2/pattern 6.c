int main(){
    int n;
    scanf("%d",&n);
    int a=0,a1=0;
    for(int i=1;i<=n;i++){
        a1+=i;
        a=a1;
        for(int j=1;j<=(n-i);j++)
            printf(" ");
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            a--;
        }
        printf("\n");
    }
    a=a1;
    for(int i=n;i>=1;i--){
        if(i!=n){
            a1-=i+1;
            a=a1;
        }
        for(int j=1;j<=(n-i);j++)
            printf(" ");
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            a--;
        }
        printf("\n");
    }
}
