int R,C;
void destroy(char matrix[R+1][C+1],int row,int col){
    if(row<0 || col<0 || row>=R || col>=C)return;

    matrix[row][col]='D';
    if(matrix[row+1][col]=='W')
            destroy(matrix,row+1,col);
    if(matrix[row][col+1]=='W')
            destroy(matrix,row,col+1);
    if(matrix[row-1][col]=='W')
            destroy(matrix,row-1,col);
    if(matrix[row][col-1]=='W')
            destroy(matrix,row,col-1);
}
int main(){
    //int R,C;
    scanf("%d %d",&R,&C);
    char matrix[R+1][C+1],temp[2];
    for(int row=0;row<R;row++){
        for(int col=0;col<C;col++){
            scanf("%s",temp);
            matrix[row][col]=temp[0];
            //if(matrix[row][col]=='I')
              //  matrix[row][col]='D';
        }
    }
    for(int row=0;row<R;row++){
        for(int col=0;col<C;col++){
            if(matrix[row][col]=='I'){
                destroy(matrix,row,col);
            }
        }
    }
        printf("\n\n");
    for(int row=0;row<R;row++){
        for(int col=0;col<C;col++){
            printf("%c ",matrix[row][col]);
        }
        printf("\n");
    }
}
