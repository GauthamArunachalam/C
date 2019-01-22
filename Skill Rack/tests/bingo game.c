int main(){
    int matrix[6][6],numberOfIn,i,j,k,breakFlag=0,rowCount=0,colmnCount=0,rsum,csum,ans,t=1;
    int inputArr[100];//{36,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};//{1,29,2,49,28,3,4,5,47,6,7,8,26,9,11,50,12,27,45,13,16,17,18,21,22,23,24,41,25,36,19,39,42};//{1,2,3,4,5,6,7,8,9,10,11,12,13,15,16,17,18,19,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,20,14};//={1,29,2,49,28,3,4,5,47,6,7,8,26,9,11,50,12,27,45,13,16,17,18,21,22,23,24,41,25,36,19,39,42};
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            scanf("%d",&matrix[i][j]);
            //matrix[i][j]=t;
            //t++;
           // printf("%d",matrix[i][j]);
        }
       // printf("\n");
    }
    scanf("%d",&numberOfIn);
    for(i=0;i<numberOfIn;i++){
       scanf("%d",&inputArr[i]);
    }
    for(i=0;i<numberOfIn;i++){
            breakFlag=0;
        for(j=1;j<=5;j++){
            for(k=1;k<=5;k++){
                if(inputArr[i]==matrix[j][k]){
                    matrix[j][k]=0;
                    breakFlag=1;
                    break;
                }
            }
            if(breakFlag==1){
                break;
            }
        }
        if(i>=25){
                rowCount=0;
                    colmnCount=0;
            for(j=1;j<=5;j++){
                    rsum=0;
                    csum=0;

                for(k=1;k<=5;k++){
                    //printf("%d ",matrix[j][k]);
                    rsum +=matrix[j][k];
                    csum +=matrix[k][j];
                }
               // printf("\n");
                if(rsum==0)
                        rowCount++;
                if(csum==0)
                        colmnCount++;
            }
            //printf("%d %d \n",rowCount,colmnCount);
            if(rowCount+colmnCount>=5){
                ans=i;
                //printf("check");
                break;
            }

        }
    }
    printf("%d",ans+1);
}
