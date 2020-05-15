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

int swapCheck(char str[], int currentIndex, int lastIndex){
    for(int i=currentIndex;i<lastIndex;i++){
        if(str[lastIndex] == str[i])
            return 0;
    }
    return 1;
}

void stringPermutate(char str[], int currentIndex, int lastIndex){
    if(currentIndex == lastIndex){
        printf("%s\n",str);
    }else{
        for(int i=currentIndex;i<lastIndex;i++){
            int check = swapCheck(str, currentIndex, i);
            if(check){
                swap(&str[currentIndex], &str[i]);
                stringPermutate(str, currentIndex+1, lastIndex);
                swap(&str[currentIndex], &str[i]);
            }
        }
    }
}

int main(){
    char str[100];
    printf("Enter the string : ");
    scanf("%s", str);
    int length = stringLength(str);
    stringPermutate(str, 0, length);
}