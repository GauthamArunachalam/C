int main(){
    int t;
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n,s3=0,s5=0,s15=0;
        scanf("%d",&n);
        for(int i=1;i<n;i++){
            if(i%3==0)
                s3 = s3+i;
            if(i%5==0)
                s5 = s5+i;
            if(i%15==0)
                s15 = s15 + i;
        }
        printf("%d",s3+s5-s15);
    }
    return 0;
}
