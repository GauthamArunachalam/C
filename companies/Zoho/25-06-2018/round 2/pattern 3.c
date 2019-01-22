int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=65;
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i*2-1;j++){
            printf("%c",a);
            if(j<i)
                a++;
            else
                a--;
        }
        printf("\n");
    }
    for(int i=n-1;i>=1;i--){
        int a=65;
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i*2-1;j++){
            printf("%c",a);
            if(j<i)
                a++;
            else
                a--;
        }
        printf("\n");
    }
}
