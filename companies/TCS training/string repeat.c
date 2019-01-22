int main()
{
    char str[100];
    scanf("%s",str);
    int arr[126]= {0};
    int len = strlen(str)-1;
    for(int i=0; i<=len; i++)
    {
        arr[str[i]]++;
    }
    int max=0,ascii;
    for(int i=0; i<126; i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
            ascii = i;
        }
    }
    printf("%c",ascii);
}
