#include <bits/stdc++.h> 
using namespace std; 

#define N 4

void printSolution(int board[N][N]) 
{ 
    for (int i = 0; i < N; i++) { 
        for (int j = 0; j < N; j++) 
            cout<<board[i][j]<<" "; 
        printf("\n"); 
    } 
} 

bool isSafeMove(int board[N][N], int row, int col) 
{ 
    if(row-1>=0 && col-1>=0){
        if(board[col-1][row-1]==1)
        return false;
    }
    for(int i=0;i<N;i++){
        if(board[i][row]==1&&i!=col){
            return false;
        }
        
        if(board[col][i]==1 && i!=row){
            return false;
        }
    }
    
    if(row+1<=N && col-1>=0){
        if(board[col-1][row+1]==1)
        return false;
    }
  
    return true; 
} 
  

bool NQueensBacktracking(int board[N][N] , int currCol)
{
    if(currCol>=N)
    {
        printSolution(board);
        cout<<"\n";
        return true;
    }
    
    for(int i=0;i<N;i++)
    {
        //choose a move
        board[currCol][i]=1;
        if(isSafeMove(board,i,currCol))
        {
            NQueensBacktracking(board,currCol+1);
        }
        //undo last move
        board[currCol][i]=0;
    }
    return false;
}


int main() 
{ 
	 int board[N][N] = { { 0, 0, 0, 0 }, 
                        { 0, 0, 0, 0 }, 
                        { 0, 0, 0, 0 }, 
                        { 0, 0, 0, 0 } }; 
  
    if (NQueensBacktracking(board, 0) == false) { 
        cout<<"No solution!" ;
        return 0; 
    } 
  
    
	
	return 0; 
} 
