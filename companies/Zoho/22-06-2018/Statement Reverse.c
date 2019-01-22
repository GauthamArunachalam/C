int main()
{
    char string[1000],temp;
    printf("Enter the statment: ");
    scanf("%[^\n]s",string);
    int len=strlen(string);
    int last=len-1;
    for(int i=0; i<len/2; i++)
    {
        temp=string[i];
        string[i]=string[last];
        string[last]=temp;
        last--;
    }
    printf("%s",string);
}
