int w[20],m,x[20];
void main()
{
    int n,r=0,i;
    printf("Enter the number of elements");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("w[%d]=",i);
        scanf("%d",&w[i]);
    }
    for(i=1;i<=n;i++)
    {
        r=r+w[i];
    }
    printf("\nEnter the constraint");
    scanf("%d",&m);
    sos(0,1,r);
}

int sos(int s,int k,int r)
{
    int j;
    x[k]=1;
    if((s+w[k])==m)
    {
        for(j=1;j<=k;j++)
        {
        printf("x[%d]=%d\n",j,x[j]);
        printf("\n");
        }
    }
    else if((s+w[k]+w[k+1])<=m)
    {
        sos(s+w[k],k+1,r-w[k]);
    }
    if( (s+r-w[k])>=m && (s+w[k+1])<=m )
    {
        x[k]=0;
        sos(s,k+1,r-w[k]);
    }
    return 0;
}
