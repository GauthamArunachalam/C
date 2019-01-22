int check(char s1[50],char s2[50],int s1Index,int s2Index)
{
    if(s2[s2Index]=='\0')
        return 1;
    if(s1[s1Index]=='\0')
        return 0;
    if(s2[s2Index]=='*')
    {
        if(s2[s2Index+1]=='\0')return 1;
        while(s1[s1Index])
        {
            if(check(s1,s2,s1Index,s2Index+1))
            {
               // printf("yes");
                return 1;
            }
            s1Index++;
        }
    }
    if(s1[s1Index]!=s2[s2Index])
        return 0;
    return check(s1,s2,s1Index+1,s2Index+2);
}
int main()
{
    char s1[1001],s2[1001];
    scanf("%s %s",s1,s2 );
    int index=0;
    while(s1[index])
    {
        if(check(s1,s2,index,0))
        {
            printf("yes");
            return 0;
        }
        index++;
    }
    printf("no");
}
