int main(){
    int R,C,max=0;
    scanf("%d %d",&R,&C);
    int row, col;
    char temp[2], matrix[R][C];
    int mat[R][C];
    for(row = 0; row < R; row++){
        for(col = 0; col < C; col++){
            scanf("%s", temp);
            matrix[row][col] = temp[0];
            mat[row][col]=0;
        }
    }
    mat[row-1][col-1]=1;
    for(row=R-1;row>=0;row--){
        for(col=C-1;col>=0;col--){
                if(row==R-1 && col==C-1)
                    continue;
            if(row==R-1){
                if(mat[row][col+1]>=1){
                    if(matrix[row][col]=='*')
                        mat[row][col]+=1;
                }
            }
            else if(col==C-1){
                if(mat[row+1][col]>=1){
                    if(matrix[row][col]=='*')
                        mat[row][col]+=1;
                }
            }
            else{
                if(mat[row+1][col]>=1 || mat[row][col+1]>=1){
                    if(matrix[row][col]=='*')
                        mat[row][col]=mat[row+1][col]+mat[row][col+1];
                }
                if(max<mat[row][col]){
                    max=mat[row][col];
                }
            }
        }
    }
    if(mat[0][0]>0){
        printf("yes");
    }else{
        printf("no");
    }
    printf("\n%d",max);

}
