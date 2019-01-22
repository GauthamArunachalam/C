main()
{
    int arr,anum[12][12],n=1;
    scanf("%d",&arr);
    int row =arr/4+1,count=1;
    int col =arr/4-1;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            anum[i][j]=count++;
        }
    }
    for(int i=1;i<=row;i++)
    {

        for(int j=1;j<=col;j++)
        {
            printf("%d",anum[i][j]);
        }
    }
}
