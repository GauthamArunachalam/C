/*

https://www.codechef.com/problems/CNOTE

Input
3
3 1 2 2
3 4
2 2    
3 1 2 2
2 3
2 3    
3 1 2 2
1 1
1 2

Output
LuckyChef
UnluckyChef
UnluckyChef

*/

#include<stdio.h>
#include<stdlib.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		int pagesToWrite, pagesLeft, rubelsLeft, notebookAvailable, pagesRequired;
		scanf("%d %d %d %d",&pagesToWrite, &pagesLeft, &rubelsLeft, &notebookAvailable);
		pagesRequired = pagesToWrite - pagesLeft;
		int notebook[notebookAvailable], cost[notebookAvailable];
		for(int j=0;j<notebookAvailable;j++){
			scanf("%d %d",&notebook[j], &cost[j]);
		}
		int flag = 0;
		for(int j=0;j<notebookAvailable;j++){
			if(pagesRequired <= notebook[j] && cost[j]<=rubelsLeft){
				printf("LuckyChef\n");
				flag = 1;
				break;
			}
		}
		if(flag == 0){
			printf("UnluckyChef\n");
		}
	}
}