main()
{
    int a[5],su,i,sb,mu;
    float di;
    for(i=1;i<=5;i++)
    {
        printf("\n\t enter number %d: ",i);
        scanf("%d",&a[i]);
    }
    su=a[1]+a[2];
    sb=su-a[3];
    mu=a[4]*a[5];
    di=(mu/sb);
    printf("\n\t SUM= %d \n\t SUB= %d \n\t MUL=%d \n\t DIV=%f ",su,sb,mu,di);
}
