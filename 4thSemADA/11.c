#include <stdio.h>
#define N 8
int board[N][N];
void printSolution()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf(board[i][j] ? "Q " : ". ");
        }
        printf("\n");
    }
}
int isSafe(int row, int col)
{
    int i, j;
    for (j = 0; j < col; j++)

        if (board[row][j])
            return 0;
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)

        if (board[i][j])
            return 0;
    for (i = row, j = col; i < N && j >= 0; i++, j--)

        if (board[i][j])
            return 0;
    return 1;
}
int solveNQ(int col)
{
    if (col == N)
        return 1;
    for (int i = 0; i < N; i++)
    {
        if (isSafe(i, col))
        {
            board[i][col] = 1;
            if (solveNQ(col + 1))
                return 1;
            board[i][col] = 0;
        }
    }
    return 0;
}
int main()
{
    if (solveNQ(0))
        printSolution();
    else
        printf("No solution\n");
    return 0;
}