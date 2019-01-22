int main(){
    int n,t1=1,t2=2,ans;
    scanf("%d",&n);
    for(int i=3;i<=n;i++){
        ans=t1+t2;
        t1=t2;
        t2=ans;
    }
    printf("%d",ans);
}
