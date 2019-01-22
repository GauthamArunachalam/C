main()
{
    int n,i,j=1;
    printf("\n\t Enter no, of terms: ");
    scanf("%d",&n);
    printf("\n\t Sequence 1: \n");
    for(i=1;i<=n;i++)
    {
        printf("\t%d",j);
        j=j+2;
    }
    j=1;
    printf("\n\t Sequence 2: \n");
    for(i=1;i<=n;i++)
    {
        printf("\t%d",j);
        j=j+5;
    }
    printf("\n\t Sequence 3: \n");
    for(i=1;i<=n;i++)
        printf("\t%d\t%d",i,n-i+1);
}
