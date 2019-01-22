
#include<stdio.h>
void input();
void process();
void output();
long int arr[100000];
int n,max,lastIndex,t,testCases;
int main()
{
    scanf("%d",&testCases);
    for(int j=0; j<testCases; j++)
    {
        input();
        process();
        output();
    }
}

void input()
{
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%ld",&arr[i]);
    }
}

void process()
{
    for(int i=0; i<n; i++)
    {
        lastIndex=n-1;
        while(arr[i]<arr[lastIndex])
        {
            lastIndex--;
        }
        t=lastIndex-i+1;
        if(t>max)
        {
            max = t;
        }
    }
}

void output()
{
    printf("%d",max);
}

