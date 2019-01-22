#include<stdlib.h>
main()
{
    char s[200];
    int l,a=0,i,j,k,f;
    scanf("%s",s);
    l=strlen(s);
    for(i=2;i<l;i++)
    {
        for(j=i;j<l;j++)
        {
            f=0;
            for(k=0;k<j;k++)
            {
                if(s[k]!=s[j-k-1])
                    f=1;
            }
            if(f==0)
                a++;
        }
    }
    printf("%d",a);
}
