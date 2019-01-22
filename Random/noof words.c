main()
{
    char s[50];
    int i,len=0;
    printf("\n\t Enter a statement: ");
    scanf("%[^\n]s",s);
    printf(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
            len++;
    }
    printf("\n\t No. of words in the statement is %d",len+1);
}
