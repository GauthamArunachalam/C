main()
{
    int a[10],sum=0,i;
    for(i=1;i<=10;i++)
    {
        printf("\n\t enter number %d: ",i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("\n\t SUM=%d",sum);
}
