#include<stdio.h>

int stringLength(char *ptr){
    int i;
    for(i=0;*ptr!='\0';i++,ptr++);
    return i;
}

void swap(char *a, char *b){
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void stringPermutation(char *a, int currentIndex, int lastIndex){
    if(currentIndex == lastIndex){
        printf("%s\n",a);
    }else{
        for(int i=currentIndex; i<=lastIndex; i++){
            swap((a+currentIndex), (a+i));
            stringPermutation(a, currentIndex+1, lastIndex);
            swap((a+currentIndex), (a+i));
        }
    }
}

int main(){
    char str[100];
    printf("Enter the string : ");
    scanf("%s",str);
    int length = stringLength(str);
    stringPermutation(str, 0, length-1);
}