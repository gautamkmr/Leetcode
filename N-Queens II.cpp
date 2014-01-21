class Solution {
public:



 
/* A utility function to check if a queen can be placed on board[row][col]
   Note that this function is called when "col" queens are already placeed
   in columns from 0 to col -1. So we need to check only left side for
   attacking queens */
bool isSafe(int board[25][25], int row, int col, int N)
{
    int i, j;
 
    /* Check this row on left side */
    for (i = 0; i < col; i++)
    {
        if (board[row][i])
            return false;
    }
 
    /* Check upper diagonal on left side */
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j])
            return false;
    }
 
    /* Check lower diagonal on left side */
    for (i = row, j = col; j >= 0 && i < N; i++, j--)
    {
        if (board[i][j])
            return false;
    }
 
    return true;
}
 
/* A recursive utility function to solve N Queen problem */
bool solveNQUtil(int board[25][25], int col, int *noOfSolutions, int N)
{
    
   /* base case: If all queens are placed then return true */
    if (col >= N)
     { 
       (*noOfSolutions)++; 
       return true;
     }
    /* Consider this column and try placing this queen in all rows
       one by one */
    for (int i = 0; i < N; i++)
    {
        /* Check if queen can be placed on board[i][col] */
        if ( isSafe(board, i, col, N) )
        {
            /* Place this queen in board[i][col] */
            board[i][col] = 1;
 
            /* recur to place rest of the queens */
            // if(solveNQUtil(board, col + 1) == true )
             //   return true;
           
            solveNQUtil(board, col + 1, noOfSolutions,N); // try different column 
              
            /* If placing queen in board[i][col] doesn't lead to a solution
               then remove queen from board[i][col] */
            board[i][col] = 0; // BACKTRACK
        }
    }
 
    return false;
}

int solveNQ(int N)
{
    int board[25][25];
    
        int i,j;
    //initialize the board
    for(i=0; i<N; i++)
      for(j=0; j<N; j++)
        board[i][j] = 0;
    
    int noOfSolutions = 0;     
    solveNQUtil(board, 0, &noOfSolutions, N); 

    return noOfSolutions;
}
 


    int totalNQueens(int n) {
        if(n==1) 
          return n;
        return solveNQ(n);
    }
};
