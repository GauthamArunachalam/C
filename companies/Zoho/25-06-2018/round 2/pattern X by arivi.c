#include<stdio.h>
int main()
{
    int i = 0, j = 1, inc,lim, n, arr[50];
    scanf("%d",&n);
    while(n!=0)
    {
        arr[i++] = n%10;
        n /= 10;
    }
    lim = i;
    inc = lim - 1;
    for(i = 0; i <= lim; i++ )
    {
        for(j = 0; j < lim; j++)
        {
            if(j == i || j == (lim - i - 1))
            {
                printf("%d", arr[lim-j-1]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
