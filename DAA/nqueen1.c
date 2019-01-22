int x[20];
int nqueen(int k,int n)
{
    int i,j;
    for (i=1;i<=n;i++)
    {
        if(place(k,i))
        {

            x[k]=i;

if(k==n)

{

for(j=1;j<=n;j++)

{

printf("x[%d]=%d \t",j,x[j]);

}

printf("\n");

}

else

nqueen(k+1,n);

}

}

return 0;

}

int place(int k,int i)

{

int j;

for(j=1;j<=k-1;j++)

{

if( (x[j]==i) || (abs(x[j]-i)==abs(j- k)) )

{

return 0;

}

}

return 1;

}

void main()

{

int n ;

printf("Enter the number of Queens");

scanf("%d",&n);

nqueen(1,n);

}
