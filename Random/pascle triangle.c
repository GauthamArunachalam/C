main()
{
    int a[100][100],i,j,n,k,l;
    printf("\n\t Enter no. of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=100;j++)
        {
            a[i][j]=0;
        }
    }
    a[1][50]=1;
    for(i=2;i<=n;i++)
    {

        for(j=1;j<=i;j++)
        {
            if(j==1)
            {
                k=50-i+1;
            }
            a[i][k]=a[i-1][k-1]+a[i-1][k+1];
            k+=2;
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=50-n+1;j<=k;j++)
        {
            if(a[i][j]==0)
            {
                printf(" ");
            }
            else
            {
                printf("%d",a[i][j]);
            }
        }
        printf("\n");
    }
}
