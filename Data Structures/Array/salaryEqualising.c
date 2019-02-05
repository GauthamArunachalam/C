/*
https://www.codechef.com/problems/SALARY

Input:
2
3
1 2 3
2
42 42

Output:
3
0
*/
#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		int n,minimumMoves = 0;
		scanf("%d",&n);
		int arr[n];
		for(int j=0;j<n;j++){
			scanf("%d",&arr[j]);
		}
		int flag = 1,maxIndex=0;
		while(flag){
			int flag1 = 0;
			for(int j=1;j<n;j++){
				if(arr[j-1] != arr[j]){
					flag1 = 1;
					break;
				}
			}
			if(flag1 == 0){
				flag = 0;
				break;
			}
			minimumMoves++;
			for(int j=0;j<n;j++){
				if(arr[maxIndex] <= arr[j]){
					maxIndex = j;
				}
			}
			for(int j=0;j<n;j++){
				if(maxIndex != j){
					arr[j]++;
				}
			}
			
		}
		printf("%d",minimumMoves);
	}
}