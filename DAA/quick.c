void qs(int,int);
int partition(int,int);
void inter(int,int);
int a[20],n;
void main()
{
    int i;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter number %d: ",i);
        scanf("%d",&a[i]);
    }
    qs(1,n);
    printf("Sorted array: ");
    for(i=1;i<=n;i++)
        printf("\n\t %d",a[i]);
}
void qs(int p,int q)
{
    int j;
    if(p<q)
    {
        j=partition(p,q+1);
        qs(p,j);
        qs(j+1,q);
    }
}
int partition(int m,int p)
{
    int v,i,j,t;
    v=a[m];
    i=m;
    j=p;
    do
    {
        do
        {
            i++;
        }while(a[i]<v);
        do
        {
            j--;
        }while(a[j]>v);
        if(i<j)
        {
            inter(i,j);
        }

    }while(i<j);
    a[m]=a[j];
    a[j]=v;
    return j;
}
void inter(int i,int j)
{
    int t;
    if(a[i]>a[j])
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
}
