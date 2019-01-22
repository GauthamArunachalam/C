int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i)*2;j++)
            printf(" ");
        for(int j=1;j<=(i*2-1)+(i*2-2);j++){
            if(j%2!=0)
                printf("*");
            else
                printf("A");
        }
        printf("\n");
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=(n-i)*2;j++)
            printf(" ");
        for(int j=1;j<=(i*2-1)+(i*2-2);j++){
            if(j%2!=0)
                printf("*");
            else
                printf("A");
        }
        printf("\n");
    }
}
