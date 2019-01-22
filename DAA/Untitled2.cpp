  #include<iostream>
    using namespace std;

    int main()
    {
    	int t,n,dm,df;

    	cin>>t;

    	while(t--)
    	{
    		int ar[100000];
    		cin>>n;
    		dm=df=0;
    		for(auto i=0;i<n;i++)
    		{
    			cin>>ar[i];

    			if(ar[i]==0)
    			{
    				dm+=1000;
    				df+=100;
    			}
    			else if(dm!=0)
    				df+=100;
    		}

    		cout<<df+dm<<endl;
    	}
    	return 0;
    }
