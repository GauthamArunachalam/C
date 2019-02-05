/*
LINK = "https://www.codechef.com/problems/LECANDY"
A Little Elephant and his friends from the Zoo of Lviv like candies very much.

There are N elephants in the Zoo. The elephant with number K (1 = K = N) will be happy if he receives at least AK candies. There are C candies in all in the Zoo.

The Zoo staff is interested in knowing whether it is possible to make all the N elephants happy by giving each elephant at least as many candies as he wants, that is, the Kth elephant should receive at least AK candies. Each candy can be given to only one elephant. Print Yes if it is possible and No otherwise.

Input:
2
2 3
1 1
3 7
4 2 2

Output:
Yes
No
*/

#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		int elephants, candies, sum=0;
		scanf("%d %d",&elephants, &candies);
		int arr[elephants];
		for(int j=0;j<elephants;j++){
			scanf("%d",&arr[j]);
			sum += arr[j];
		}
		if(sum <= candies){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
}