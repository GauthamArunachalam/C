main()
{
    char names[20][20],s[20];
    int i,c,j;
    for(i=1;i<=10;i++)
    {
        printf("\n\t Enter name: ");
        scanf("%s",names[i]);
    }
    for(i=1;i<=10;i++)
    {
        for(j=i+1;j<=10;j++)
        {
            c=strcmp(names[i],names[j]);
            if(c>0)
            {
                strcpy(s,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],s);
            }
        }
    }
    for(i=1;i<=10;i++)
    {
        printf("\n\t");
        printf(names[i]);
    }
}
