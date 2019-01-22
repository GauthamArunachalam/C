main()
{
    int a[10][10],sum=0,n,i,j;
    printf("\n\t Enter no. of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("\n\t A[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
            if(i==j)
                sum=sum+a[i][j];
        }
    }
    printf("\n\t SUM OF THE DIAGONAL: %d",sum);
}
