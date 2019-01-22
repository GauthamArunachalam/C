int main(){
    int term,flag=0,count=0,t1=1,t2=1,t3;
    scanf("%d",&term);
    if(term%2==0){
        term=(term/2);
        int t=2;
        while(1){
            flag=0;
            for(int i=2;i<=t/2;i++){
                if(t%i==0){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                count++;
                //printf("%d %d\n",t,count);
            }
            if(count==term){
                printf("%d",t);
                break;
            }
            t++;
        }
    }else{
        term=(term/2);
        if(term==0 || term==1){
            t3=1;
        }
        for(int i=1;i<term;i++){
            t3=t1+t2;
            t1=t2;
            t2=t3;
        }
        printf("%d",t3);
    }
}
