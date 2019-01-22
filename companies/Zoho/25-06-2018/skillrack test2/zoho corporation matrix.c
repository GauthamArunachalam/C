int n;
int check(char st[n][n],char substring[],int martixRow,int matirxColumn,int subStringIndex,int subStringLength,int startRow,int startColumn,int a);
int main(){
    char str[100],subString[50];
    scanf("%s",str);
    scanf("%d",&n);
    scanf("%s",subString);
    char st[n][n];
    int l=strlen(str)-1;
    int l2 = strlen(subString)-1;
    int index=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(index<=l){
                st[i][j]=str[index];
                index++;
            }else{
                st[i][j]='0';
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%c ",st[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            check(st,subString,i,j,0,l2,i,j,0);
        }
    }
}
int check(char st[n][n],char subString[],int matrixRow,int matrixColumn,int subStringIndex,int subStringLenght,int startRow,int startColumn,int a){
        if(st[matrixRow][matrixColumn]==subString[subStringIndex]){
             //printf("%d %d\n%d %d %d\n",startRow,startColumn,matrixRow,matrixColumn,a);
            if(subStringLenght==subStringIndex){
                printf("%d %d\n%d %d",startRow,startColumn,matrixRow,matrixColumn);
                exit(0);
            }
            if(a==0){
                check(st,subString,matrixRow,matrixColumn+1,subStringIndex+1,subStringLenght,startRow,startColumn,1);
                check(st,subString,matrixRow,matrixColumn-1,subStringIndex+1,subStringLenght,startRow,startColumn,2);
                check(st,subString,matrixRow+1,matrixColumn,subStringIndex+1,subStringLenght,startRow,startColumn,3);
                check(st,subString,matrixRow-1,matrixColumn,subStringIndex+1,subStringLenght,startRow,startColumn,4);
            }
            if(a==1){
                check(st,subString,matrixRow,matrixColumn+1,subStringIndex+1,subStringLenght,startRow,startColumn,1);
            }else if(a==2){
                check(st,subString,matrixRow,matrixColumn-1,subStringIndex+1,subStringLenght,startRow,startColumn,2);
            }else if(a==3){
                check(st,subString,matrixRow+1,matrixColumn,subStringIndex+1,subStringLenght,startRow,startColumn,3);
            }else if(a==4){
                check(st,subString,matrixRow-1,matrixColumn,subStringIndex+1,subStringLenght,startRow,startColumn,4);
            }
        }
}
