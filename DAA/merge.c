void ms(int,int);
void merge(int,int,int);
int a[20],n,b[20];
void main()
{
    int i;
    printf("Enter numbr of elements: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter number %d: ",i);
        scanf("%d",&a[i]);
    }
    ms(1,n);
    printf("Sorted array is :");
    for(i=1;i<=n;i++)
        printf("\n\tNumber %d is %d",i,a[i]);
}
void ms(int l,int h)
{
    int m;
    if(l<h)
    {
        m=(l+h)/2;
        ms(l,m);
        ms(m+1,h);
        merge(l,m,h);
    }
}
void merge(int l,int m,int high)
{
    int i,h,j,k;
    i=l;
    h=l;
    j=m+1;
    while((h<=m)&&(j<=high))
    {
        if(a[h]<a[j])
        {
            b[i]=a[h];
            h++;
        }
        else
        {
            b[i]=a[j];
            j++;
        }
        i++;
    }
    if(h>m)
    {
        for(k=j;k<=high;k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    else
    {
        for(k=h;k<=m;k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    for(k=l;k<=high;k++)
        a[k]=b[k];
}
