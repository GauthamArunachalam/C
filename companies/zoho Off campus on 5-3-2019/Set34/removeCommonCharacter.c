#include<stdio.h>

int stringLength(char *ptr){
    int i = 0;
    for(i=0;*ptr !='\0';i++, ptr++);
    return i;
}

int main(){
    char str1[100],str2[100], res[100];
    int booleanArray[26]={0}, resultIndex = 0;
    printf("Enter String 1: ");
    scanf("%[^\n]s", str1);
    getchar();
    printf("Enter string 2:");
    scanf("%[^\n]s", str2);

    int str1Length = stringLength(str1);
    int str2Length = stringLength(str2);

    for(int i=0;i<str2Length;i++){
        if(str2[i] > 96){
            booleanArray[str2[i] - 97]++;
        }else{
            booleanArray[str2[i] - 65]++;
        }
    }

   for(int i=0; i<str1Length; i++){
       if(str1[i] > 96){
           if(booleanArray[str1[i] - 97] == 0){
               res[resultIndex] = str1[i];
               resultIndex++;
           }
       }else{
           if(booleanArray[str1[i] - 65] == 0){
               res[resultIndex] = str1[i];
               resultIndex++;
           }
       }
   }
   res[resultIndex] = '\0';
   printf("%s", res);

}