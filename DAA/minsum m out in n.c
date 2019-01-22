

main() {
	int n,m,a[50],i,j,res=0,t,k;
	scanf("%d",&n);
	scanf("%d",&m);
	for(i=1;i<=n;i++)
	    scanf("%d",&a[i]);
	for(i=1;i<=m;i++)
	{
	    k=a[1];t=0;
	    for(j=1;j<=n;j++)
	    {
	        if(a[j]<=k)
	            t=j;
	    }
	    res+=a[t];
	    a[t]=32000;
	}
	printf("%d",res);
}
