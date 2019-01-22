main()
{
    char s[20];
    int i,n=0;
    printf("\n\t Enter a string: ");
    scanf("%s",s);
    for(i=1;s[i]!='\0';i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            n++;
    }
    printf("\n\t The string as %d vowels",n);
}
