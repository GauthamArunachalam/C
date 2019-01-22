main()
{
    int a[10],n,sum=0,i;
    printf("\n\t Enter no. of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n\t enter A[%d]: ",i);
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("\n\t sum = %d",sum);
}
