#include<stdio.h>
#include<string.h>

int countOfInter(char str[], int n){
   
    if(n==0 || n == 1){
        // printf("FUCK\n");
        return 1;
    }
    int count = 0;
    //printf("%c %d",str[n-1], str[n-1]);
    if(str[n-1] > '0'){
        //printf("Hello");
        count = countOfInter(str, n-1);
    }
    if(str[n-2]=='1' || (str[n-2]=='2' && str[n-1]<'7')){
        count += countOfInter(str, n-2);
    }
    return count;
}
int main(){
    char str[100];
    printf("Enter the string : ");
    scanf("%s",&str);
    int len = strlen(str);
    printf("%d ", countOfInter(str, len));
}