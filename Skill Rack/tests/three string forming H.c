void print(char s1[50],char s2[50],char s3[50]);
int index=0;
int check(char s1[50],char s2[50],char s3[50])
{
    int l1=strlen(s1);
    int l3=strlen(s3);
    if(l1==l3)
    {
        char first=s2[0];
        int l2=strlen(s2);
        char last=s2[l2-1];
        for(int i=0; i<l2; i++)
        {
            if(s1[i]==first && s3[i]==last)
            {
                index=i;
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    char s1[50],s2[50],s3[50];
    scanf("%s\n%s\n%s",s1,s2,s3);
    int flag=0;
    flag=check(s1,s2,s3);
    if(flag==1)
    {
        //  printf("\ncheck\n");
        print(s1,s2,s3);
        return;
    }
    flag=check(s3,s2,s1);
    if(flag==1)
    {
        print(s3,s2,s1);
        return;
    }
    flag=check(s2,s1,s3);
    if(flag==1)
    {
        print(s2,s1,s3);
        return;
    }
    flag=check(s3,s1,s2);
    if(flag==1)
    {
        print(s3,s1,s2);
        return;
    }
    flag=check(s1,s3,s2);
    if(flag==1)
    {
        print(s1,s3,s2);
        return;
    }
    flag=check(s2,s3,s1);
    if(flag==1)
    {
        print(s2,s3,s1);
        return;
    }
}
void print(char s1[50],char s2[50],char s3[50])
{
    int l=strlen(s1);
    int l2=strlen(s2);
    for(int i=0; i<l; i++)
    {
        if(i!=index)
        {
            printf("%c",s1[i]);
            for(int j=1; j<=l2-2; j++)
                printf("+");
            printf("%c",s3[i]);
        }
        else
        {
            printf("%s",s2);
        }
        printf("\n");
    }
}
