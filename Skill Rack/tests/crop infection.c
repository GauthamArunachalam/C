int R,C;
int check(char matrix[R][C],int row,int col);
int main(){
    int R,C;
    scanf("%d %d",&R,&C);
    char matrix[R][C],temp[2];
    for(int row=0;row<R;row++){
        for(int col=0;col<C;col++){
            scanf("%s",temp);
            matrix[row][col]=temp[0];
            if(matrix[row][col]=='I')
                matrix[row][col]='D';
        }
    }
    for(int row=0;row<R;row++){
        for(int col=0;col<C;col++){
            if(matrix[row][col]=='D'){
                check(matrix,row,col);
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
int check(char matrix[R][C],int row,int col){
    if(row==0 && col==0){
        if(matrix[row+1][col]=='W'){
            matrix[row+1][col]='D';
            check(matrix,row+1,col);
        }
        if(matrix[row][col+1]=='W'){
            matrix[row][col+1]='D';
            check(matrix,row,col+1);
        }
        return;
    }
    else if(row==R-1 && col==0){
        if(matrix[row][col+1]=='W'){
            matrix[row][col+1]='D';
            check(matrix,row,col+1);
        }
    if(matrix[row-1][col]=='W'){
            matrix[row-1][col]='D';
            check(matrix,row-1,col);
        }
        return;

    }
    else if(row==0 && col==C-1){
            if(matrix[row+1][col]=='W'){
            matrix[row+1][col]='D';
            check(matrix,row+1,col);
        }
    if(matrix[row][col-1]=='W'){
            matrix[row][col-1]='D';
            check(matrix,row,col-1);
        }
        return;

    }
    else if(row==R-1 && col==C-1){
            if(matrix[row-1][col]=='W'){
            matrix[row-1][col]='D';
            check(matrix,row-1,col);
        }
            if(matrix[row][col-1]=='W'){
            matrix[row][col-1]='D';
            check(matrix,row,col-1);
        }
        return;

    }
    else if(row==0){
        if(matrix[row+1][col]=='W'){
            matrix[row+1][col]='D';
            check(matrix,row+1,col);
        }
        if(matrix[row][col+1]=='W'){
            matrix[row][col+1]='D';
            check(matrix,row,col+1);
        }
        return;
    }
    else if(row==R-1){
        if(matrix[row][col+1]=='W'){
            matrix[row][col+1]='D';
            check(matrix,row,col+1);
        }
        if(matrix[row-1][col]=='W'){
            matrix[row-1][col]='D';
            check(matrix,row-1,col);
        }
        return;
    }
    else if(col==0){
        if(matrix[row+1][col]=='W'){
            matrix[row+1][col]='D';
            check(matrix,row+1,col);
        }
        if(matrix[row-1][col]=='W'){
            matrix[row-1][col]='D';
            check(matrix,row-1,col);
        }
        if(matrix[row][col+1]=='W'){
            matrix[row][col+1]='D';
            check(matrix,row,col+1);
        }
        return;
    }
    else if(col==C-1){
        if(matrix[row+1][col]=='W'){
            matrix[row+1][col]='D';
            check(matrix,row+1,col);
        }
        if(matrix[row-1][col]=='W'){
            matrix[row-1][col]='D';
            check(matrix,row-1,col);
        }
        if(matrix[row][col-1]=='W'){
            matrix[row][col-1]='D';
            check(matrix,row,col-1);
        }
        return;
    }
    else{
    if(matrix[row+1][col]=='W'){
        matrix[row+1][col]='D';
        check(matrix,row+1,col);
    }
    if(matrix[row-1][col]=='W'){
        matrix[row-1][col]='D';
        check(matrix,row-1,col);
    }
    if(matrix[row][col+1]=='W'){
        matrix[row][col+1]='D';
        check(matrix,row,col+1);
    }
    if(matrix[row][col-1]=='W'){
        matrix[row][col-1]='D';
        check(matrix,row,col-1);
    }
    return;
    }
}
