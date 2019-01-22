#include <stdio.h>
int main()
{
	int n,len1,len2,index,flag,fcnt=0;
	scanf("%d",&n);
	char ch1[n][10];
	char ch2[n][10];
	char ch3[10];
	char *culprit;
	for (int i = 0; i < n; ++i)
	{
		scanf("%s",ch1[i]);
		scanf("%s",ch2[i]);
	}
	scanf("%s",ch3);
	// printf("\nch3 is %s",ch3);
	for (int i = 0; i < n; ++i)
	{
		index = 0;
		len1=0;
		len2=0;
		flag=0;
		// printf("\nchecking %s and %s ",ch2[i],ch3);
		while(ch2[i][index]!='\0')
		{
			len1++;
			index++;
		}
		index = 0;
		while(ch3[index]!='\0')
		{
			len2++;
			index++;
		}
		index = 0;
		while(ch3[index]!='\0')
		{
			if (ch2[i][index]==ch3[index])
			{
				flag++;
			}
			index++;
		}
		// printf("\nlen 1 = %d",len1);
		// printf("\nlen 2 = %d",len2);
		// printf("\nflag  = %d",flag);
		if (flag==len2&&len1==len2)
		{
			culprit = ch1[i];
			break;
		}


	}
	// printf("\n\n%s culprit\n\n",culprit);
	for (int i = 0; i < n; ++i)
	{
		index = 0;
		len1=0;
		len2=0;
		flag=0;
		// printf("\nchecking %s and %s ",ch2[i],culprit);
		while(ch2[i][index]!='\0')
		{
			len1++;
			index++;
		}
		index = 0;
		while(culprit[index]!='\0')
		{
			len2++;
			index++;
		}
		index = 0;
		while(culprit[index]!='\0')
		{
			if (ch2[i][index]==culprit[index])
			{
				flag++;
			}
			index++;
		}
		// printf("\nlen 1 = %d",len1);
		// printf("\nlen 2 = %d",len2);
		// printf("\nflag  = %d",flag);
		if (flag==len2&&len1==len2)
		{
			fcnt++;
		}
	}
	printf("%d ",fcnt);
}
