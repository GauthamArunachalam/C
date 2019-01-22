

int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int n,j,k,r=0,d;
        scanf("%d",&n);
        char a[2][n];
        for(j=0;j<2;j++)
        {
            for(k=0;k<n;k++)
            {
                scanf("%c",&a[j][k]);
            }
        }
        for(k=0;k<(n-1);k++)
        {
            if(a[0][k]=='*')
            {
                if(a[0][k]==a[1][k])
                {
                    d=1;
                }
                if((a[0][k]==a[0][k+1])||(a[0][k]==a[1][k+1]))
                {
                    r++;
                }
            }
        }
        printf("%d",r+d);
    }
}
