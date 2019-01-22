int main()
{
    int t;
    scanf("%d",&t);
    int count = 0;
    for(int i=1; i<=t; i++)
    {
        int n;
        count =0;
        scanf("%d",&n);
        int arr[n];
        for(int j=0; j<n; j++)
        {
            scanf("%d",&arr[j]);
        }
        for(int j=0; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                for(int l=k+1; l<n; l++)
                {
                    if(j!=k && j!=l && k!=l)
                    {
                        if((arr[j]*arr[k])==arr[l])
                        {
                            count++;
                            continue;
                        }
                        if((arr[j]*arr[l])==arr[k])
                        {
                            count++;
                            continue;
                        }
                        if((arr[k]*arr[l])==arr[j])
                        {
                            count++;
                            continue;
                        }
                    }
                }
            }
        }
        printf("Case #%d: %d",i,count);
    }
}


