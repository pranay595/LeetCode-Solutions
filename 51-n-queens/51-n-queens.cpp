class Solution {
public:
    
    
    void solve(int col, vector<string>& board, vector<vector<string>>& ans, int n, vector<int>& rows, vector<int>& lowerDiagonal, vector<int>& upperDiagonal){
        if(col==n){
            ans.push_back(board);
            return;
        }
        
        for(int row=0;row<n;row++){
            if(rows[row]==0 && lowerDiagonal[row+col]==0 && upperDiagonal[n-1+col-row]==0){
                rows[row] = 1;
                lowerDiagonal[row+col] = 1;
                upperDiagonal[n-1+col-row] = 1;
                board[row][col]='Q';
                solve(col+1,board,ans,n,rows,lowerDiagonal,upperDiagonal);
                board[row][col]='.';
                rows[row] = 0;
                lowerDiagonal[row+col] = 0;
                upperDiagonal[n-1+col-row] = 0;
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        
        string s(n,'.');
        
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        
        vector<int> rows(n,0), lowerDiagonal(2*n-1,0), upperDiagonal(2*n-1,0);
        
        solve(0,board,ans,n,rows,lowerDiagonal,upperDiagonal);
        
        return ans;
    }
};