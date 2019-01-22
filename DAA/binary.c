void binary(int l,int h,int k);
int a[30],n;
void main()
{
    int i,k,j,t;
    printf("Enter no. od elements: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter number %d: ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter search element: ");
    scanf("%d",&k);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    binary(1,n,k);
    printf("Element not found");
}
void binary(int l,int h,int k)
{
    int m;
    if(l<=h)
    {
        m=(l+h)/2;
        if(a[m]==k)
        {
            printf("Element found");
            exit(1);
        }
        if(a[m]>k)
            binary(l,m-1,k);
        else
            binary(m,h,k);
    }
    else
        printf("Element not found");
}
