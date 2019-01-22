#include<iostream>
using namespace std;
main()
{
    int t,l,r,sa=0,ma=0;
    char s[100];
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>s;
        l = strlen(s);
        for(int j=0;s[j]!='\0';j++)
        {
            if(s[j]=='s' && s[j+1]=='m')
                s[j]='*';
            else if(s[j]=='m' && s[j+1]=='s')
                s[j+1]='*';
        }
        for(int j=0;s[j]!='\0';j++)
        {
            if(s[j]=='s')
                sa++;
            if(s[j]=='m')
                ma++;
        }
        if(sa<ma)
            cout<<"mongooses";
        if(ma<sa)
            cout<<"snakes";
        if(ma==sa)
            cout<<"tie";
    }
}
