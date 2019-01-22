main()
{
    char name1[30],name2[20],name[40],flames="flames";
    int s1,s2,s[10],l=1,n,a,i,j,k,f,g;
    printf("\n\t Enter a string: ");
    scanf("%s",&name1);
    printf("\n\t Enter another string: ");
    scanf("%s",&name2);
    //printf("%s %s",name1,name2);
    strcpy(name,name1);
    strcat(name,name2);
   // printf("%s",name);
    n=strlen(name);
    printf("%d",n);
    for(i=0;i<=n;i++)
    {
        l=0;
        for(j=i+1;j<=n;j++)
        {
            if(name[i]==name[j])
            {
                for(k=j;k<=n;k++)
                    name[k]=name[k+1];
                    l=1;
                //printf("hi");
            }
        }
        if(l==1)
        {
            for(k=i;k<=n;k++)
                name[k]=name[k+1];
        }
        printf(" %s",name);
    }
    n=strlen(name);
    for(i=6;i>1;i--)
    {
         f=n/i;
        f=n-f*i;
        g=g+f;
        if(g<=i)
        {
            strcpy(flames[g],"a");
        }
        else
        {
            g=g-i;
            strcpy(flames[g],"a");
        }
    }
    for(i=0;i<=6;i++)
    {
        if(flames[i]!="a")
            printf("%s",flames[i]);
    }
}
