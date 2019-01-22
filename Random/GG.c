#include<stdio.h>
#define Max 10002
int dp[Max];
int max(int x,int y){
	return x<y?y:x;
}
int sequence(int src,int a[],int n){
	if(dp[src] == -1){
		int i,tmp=0;
		for(i=src+1;i<n;i++){
			if(a[i]%a[src]==0){
				tmp = max(tmp,sequence(i,a,n));
			}
		}
		dp[src] = tmp+1;

	}
	return dp[src];
}
int main(){
	int n,i=0,a[Max];
	for(i=0;i<Max;i++)
		dp[i] = -1;
	scanf("%d",&n);
	i=0;
	while(i<n){
		scanf("%d",&a[i]);
		i++;
	}
	int tmp = 0;
	for(i=0;i<n;i++){
		tmp = max(tmp,sequence(i,a,n));
	}
	printf("%d\n",tmp);
	return 0;
}
