main()
{
    int a[10],b[10],c[10],i,j=1,k=1;
    for(i=1;i<=10;i++)
    {
        printf("\n\t Enter number %d: ",i);
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            b[j]=a[i];
            j++;
        }
        else
        {
            c[k]=a[i];
            k++;
        }
    }
    printf("\n\t Even no, are: ");
    for(i=1;i<j;i++)
        printf("\t%d",b[i]);
    printf("\n\t Odd no. are: ");
    for(i=1;i<=k/2;i++)
        printf("\t%d",c[i]);
}
