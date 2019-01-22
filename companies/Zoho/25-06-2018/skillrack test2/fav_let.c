int findLen(char s[]);
int findFav(char s[]);
int combinations(int combo[],int comboSize,int filled,int filledIndex,int len[],int isFav[],int val[]);
char fav,temp;
int flag = 0;
int N,vis[100];
int index=0;
char strs[100][100];
int main()
{
    scanf("%d",&N);
    getchar();
    scanf("%c\n",&fav);
    while(scanf("%s%c",strs[index],&temp)>0)
    {
        index++;
        if(temp=='\n')
        {
            break;
        }

    }
   // printf("check %d",index);
    int lenArr[index],isFavArr[index],val[index];
    for(int i=0; i<index; i++)
    {
        lenArr[i] = findLen(strs[i]);
        isFavArr[i] = findFav(strs[i]);
        val[i]=i;
        vis[i]=0;
    }
    for(int i=0; i<index; i++)
    {
        printf("%d %d %d %d\n",lenArr[i],isFavArr[i],val[i],vis[i]);
    }
    int combosize= 2,filled=0,filledindex=0;
    for(; combosize<index; combosize++)
    {
        int combo[combosize],filled=0,filledindex=0;
        for(; filled<index; filled++)
        {
            if(vis[filled]==0)
                combinations(combo,combosize,filled,filledindex,lenArr,isFavArr,val);
        }
    }
    for(int i=0; i<index; i++)
    {
        printf("%d %d %d %d\n",lenArr[i],isFavArr[i],val[i],vis[i]);
    }
}
int findFav(char s[])
{
    for(int i=0; i<index; i++)
    {
        if(s[i]==fav)
        {
            return 1;
        }
    }
    return 0;
}
int findLen(char s[])
{
    int len=0;
    for(int i=0; s[i]; i++)
    {
        if(s[i]!=fav)
        {
            len++;
        }
    }
    return len;
}
int combinations(int combo[],int comboSize,int filled,int filledIndex,int len[],int isFav[],int val[])
{
    combo[filled]=val[filledIndex];
    filled++;
    filledIndex++;
    if(filled==comboSize)
    {
        int sum=0,index1=0,favSum=0;
        for(; index1<=comboSize-1; index1++)
        {
            if(vis[combo[index1]]==0)
            {
                sum+=len[combo[index1]];
                favSum+=isFav[combo[index1]];

            }
            else
            {
                printf("check\n");
                return;
            }
        }
        if(sum<=N && favSum>0)
        {
            for(index1=0; index1<=comboSize-1; index1++)
            {
                printf("Fuck :%s ",strs[combo[index1]]);
                vis[combo[index1]]=1;
            }
            printf("\n");
        }
    }
    while(filledIndex<index)
    {
        if(vis[filledIndex]==0)
            combinations(combo,comboSize,filled,filledIndex,len,isFav,val);
        filledIndex++;
    }
}
