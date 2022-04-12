class Solution {
public:
    
    void solve(int col, vector<int>& board, int n, int& count, vector<int>& rows, vector<int>& upperDiagonal, vector<int>& lowerDiagonal){
        if(col==n){
            count++;
            return;
        }
        
        for(int row=0;row<n;row++){
            if(rows[row]==0 && lowerDiagonal[row+col]==0 && upperDiagonal[n-1+col-row]==0){
                
                rows[row] = 1;
                lowerDiagonal[row+col] = 1;
                upperDiagonal[n-1+col-row] = 1;
                
                solve(col+1,board,n,count,rows,upperDiagonal,lowerDiagonal);
                
                rows[row] = 0;
                lowerDiagonal[row+col] = 0;
                upperDiagonal[n-1+col-row] = 0;
            }
        }
    }
    
    int totalNQueens(int n) {
        vector<int> board(n,0);
        
        int count = 0;
        
        vector<int> rows(n,0), upperDiagonal(2*n-1,0), lowerDiagonal(2*n-1,0);
        
        solve(0,board,n,count,rows,upperDiagonal,lowerDiagonal);
        
        return count;
    }
};