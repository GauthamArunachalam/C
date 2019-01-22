void nqueen(int,int);
int place(int,int);
int n,x[20];
void main()
{
    int i;
    printf("Enter no. of queens: ");
    scanf("%d",&n);
     printf("The sol are: ");
    nqueen(1,n);


}
void nqueen(int k,int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        if(place(k,i))
        {
            x[k]=i;
            if(k==n)
            {
                for(j=1;j<=n;j++)
                    printf("\t%d",x[i]);
            }
            else
            {
                nqueen(k+1,n);
            }
        }
    }
}
int place(int k,int i)
{
    int j;
    for(j=1;j<=k-1;j++)
    {
        if((x[j]==i) || (abs(x[j]-i))==(abs(j-k)))
        {
            return 0;
        }
    }
    return 1;
}
