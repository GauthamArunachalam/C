int favi(int number,int favNo);
int maxFind(int index,int arr[index],int i,int j);
int main()
{
    int arr[100],index=0,windowSize,favNo;
    char c;
    while(scanf("%d%c",&arr[index],&c)>0)
    {
        index++;
        if(c=='\n')
            break;
    }
    scanf("%d %d",&windowSize,&favNo);
    for(int i=0; i<=index-windowSize; i++)
    {
        int fav=0,max,count=1,temp;
        for(int j=i; j<windowSize+i; j++)
        {
            fav+=favi(arr[j],favNo);

        }
        max = maxFind(index,arr,i,windowSize);
         if(fav>0)
         {
             printf("Valid: ");
             for(int j=i; j<windowSize+i; j++)
             {
                 printf("%d ",arr[j]);
             }
             printf(" MAX: %d\n",max);
         }
         else
         {
             printf("Not Valid: ");
             for(int j=i;j<windowSize+i;j++){
                 printf("%d ",arr[j]);
             }
             printf(" MAX : %d\n",max);
         }
    }
}
int favi(int number,int favNo)
{
    int temp;
    while(number>0)
    {
        temp=number%10;
        if(temp==favNo)
        {
            return 1;
        }
        number/=10;
    }
    return 0;
}
int maxFind(int index,int arr[index],int i,int j)
{
    int max=0,no=0,max1,d,c=0,b[index];
    for(int k=i; k<j+i; k++)
    {
        b[k]=arr[k];
        int count=0;
        int temp=arr[k];
        while(temp>0)
        {
            temp/=10;
            count++;
        }
        if(max<count)
            max=count;
    }
    while(max--)
    {
        max1=0;
        for(int k=i; k<j+i; k++)
        {
            if(b[k]>0)
            {
                d=b[k]%10;
                b[k]/=10;
                if(max1<d)
                {
                    max1=d;
                }
            }
        }
        //printf("\nCHECK : %d\n",max1);
        if(c==0)
        {
            no=max1;
            c++;
        }
        else
        {
            int val=1,t=c;
            while(t--){
                val=val*10;
            }
            no+=max1*val;
           // printf("DO DO: %d\n",no);
            c++;
        }
    }
   // printf("FUCK : %d\n",no);
    return no;
}
/* 35 145 67 1004 88 456 2054*/
