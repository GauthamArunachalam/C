#include <stdio.h>
#define SIZE 5
#define MAXVAL 50
int rowSlashed[SIZE]= {0},colSlashed[SIZE]= {0}, totalSlashed=0;
void fill(int matrix[SIZE][SIZE], int positions[MAXVAL+1])
{
    int row, col, index=0;
    while(index <= MAXVAL)
    {
        positions[index] = -1;
        index++;
    }
    for(row=0; row<=SIZE-1; row++)
    {
        for(col=0; col<=SIZE-1; col++)
        {
            scanf("%d", &matrix[row][col]);
            positions[matrix[row][col]] = (row*SIZE)+col;
        }
    }
}
void slash(int matrix[SIZE][SIZE], int currentGuess, int positions[MAXVAL+1])
{
    int row, col;
    if(positions[currentGuess] == -1) return;
    row = positions[currentGuess]/5;
    col = positions[currentGuess]%5;
    rowSlashed[row]++;
    colSlashed[col]++;
    if(rowSlashed[row]==SIZE && colSlashed[col]==SIZE)
    {
        totalSlashed += 2;
    }
    else if(rowSlashed[row] == SIZE || colSlashed[col]== SIZE)
    {
        totalSlashed++;
    }
}
int main()
{
    int matrix[SIZE][SIZE], positions[MAXVAL+1];
    int row, col, N, currentGuess, ctr=1;
    fill(matrix, positions);
    scanf("%d", &N);
    while(ctr <= N)
    {
        scanf("%d", &currentGuess);
        slash(matrix, currentGuess, positions);
        if(totalSlashed>=5)
        {
            printf("%d", ctr);
            return 0;
        }
        ctr++;
    }
}
