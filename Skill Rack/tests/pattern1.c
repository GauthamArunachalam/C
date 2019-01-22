int main(){
    int n,i,j,val;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(j==1)
                    val=i;
            else if(j%2==0){
                val=val+(n-i)*2+1;
            }
            else{
                    int c=abs(i-j);
                val=val+c*2+2;
            }
            printf("%d ",val);
        }
        printf("\n");
    }
}
