int main()
{
    char str[100];
    scanf("%[^\n]s",str);
    int len = strlen(str);
    int count =0;
    for(int i=0; i<len; i++)
    {
        if(str[i]==' '){
            printf(" ");
            count=0;
            continue;
        }
        else if(count%2==0)
        {
            printf("%c",toupper(str[i]));
        }
        else if(count%2!=0)
        {
            printf("%c",tolower(str[i]));
        }
        count++;
    }
}
