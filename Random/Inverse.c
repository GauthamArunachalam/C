#include<math.h>
#include<stdio.h>
int main(){
        long long int numbers,count=0,mainCount=0,half;
        scanf("%ld",&numbers);
        half = numbers/2;
        int a[numbers+1],b[half+1];
        for(int i=2;i<=numbers;i++){
            a[i]=1;
        }
        for(int i=2;i<=(int)sqrt(numbers)+1;i++){
            if(numbers%i==0){
                int t=1,j=1;
                while(t<=numbers){
                    a[t]=0;
                    t=j*i;
                    j++;
                }
            }
        }
        for(int i=2;i<=numbers;i++){
            if(a[i]!=0){
                count++;
            }
        }
        printf("%llu",count+1);
}
