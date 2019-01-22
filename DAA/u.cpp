#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int r,l,s,t,a;
	cin>>r;
    for(int i=1;i<=r;i++)
    {
        cin>>l;
        char na[l], h = 'H', t = 'T';
        cin>>na;
        for(int j=0;j<l;j++)
        {
            if(strcmp(na[j],h))
            {
                s=1;
                a++;
            }
            if(strcmp(na[j],t))
            {
                if(s!=1)
                {
                    t=1;
                    break;
                }
                else
                {
                    a--;
                    s=0;
                }

            }
        }
        if((t==1)||(a!=0))
        {
            cout<<"Invalid";


        }
       else if(a==0)
        cout<<"Valid";
    }
	return 0;
}
