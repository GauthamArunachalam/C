main()
{
    char s[50];
    int i,len=0;
    printf("\n\t Enter a string: ");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
        len++;
    printf("\n\t length of the string is : %d",len);
}
